//---------------------------------------------------------------------------

#include <vcl.h>
#include <Registry.hpp>
#pragma hdrstop

#include "AutorunRemoveForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAutorunRemove *AutorunRemove;
//---------------------------------------------------------------------------
__fastcall TAutorunRemove::TAutorunRemove(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TAutorunRemove::ReadRunKey(bool isUser)
{

	String autoKey=isUser?user:machine;

	TRegistry* reg=new TRegistry();

	reg->RootKey = isUser?HKEY_CURRENT_USER:HKEY_LOCAL_MACHINE;

	if(reg->OpenKey(userKey,false))
	{
		TStrings* keys = new TStringList();

		reg->GetValueNames(keys);


		for(int i=0;i<keys->Count;i++)
		{
			String s=keys->Strings[i];
			String value=reg->ReadString(s);

			TListItem* item=lv1->Items->Add();
			item->Caption=s;
			item->SubItems->Add(value);
			item->SubItems->Add(autoKey);
		}

		keys->Free();
	}

	reg->Free();
}
void __fastcall TAutorunRemove::FormCreate(TObject *Sender)
{
	ReadRunKey(false);
	ReadRunKey(true);
}
//---------------------------------------------------------------------------
void __fastcall TAutorunRemove::btn2Click(TObject *Sender)
{
	if(lv1->SelCount>0)
	{
		TListItem* selItem=lv1->Selected;

		if(::MessageBox(this->Handle,_T("你确定要删除该项吗?"),_T("确认"),MB_ICONQUESTION|MB_OKCANCEL)==IDOK)
		{
			String rootValue=selItem->SubItems->Strings[1];
			String del_Key=selItem->Caption;

			bool isUser =rootValue==user;
			String regValue=selItem->Caption;

			TRegistry* reg=new TRegistry();

			reg->RootKey = isUser?HKEY_CURRENT_USER:HKEY_LOCAL_MACHINE;
			if(reg->OpenKey(userKey,false))
			{
				reg->DeleteValue(del_Key);
			}
			reg->Free();

			selItem->Delete();
		}
	}
	else
	{
		::MessageBox(this->Handle,_T("请首先选择需要删除的项！"),_T("警告"),MB_ICONWARNING);
    }
}
//---------------------------------------------------------------------------


void __fastcall TAutorunRemove::FormClose(TObject *Sender, TCloseAction &Action)
{
    Action=caFree;
}
//---------------------------------------------------------------------------

