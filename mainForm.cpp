//---------------------------------------------------------------------------

#include <vcl.h>
#include <Registry.hpp>
#pragma hdrstop

#include "mainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ReadRunKey(bool isUser)
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

			TListItem* item=ListView1->Items->Add();
			item->Caption=s;
			item->SubItems->Add(value);
			item->SubItems->Add(autoKey);
		}

		keys->Free();
	}

	reg->Free();
}
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	ReadRunKey(false);
	ReadRunKey(true);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(ListView1->SelCount>0)
	{
		TListItem* selItem=ListView1->Selected;

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
void __fastcall TForm1::btn1Click(TObject *Sender)
{
	if (::MessageBox(Handle,_T("你真的要退出吗？"),
											   _T("询问"), MB_YESNO +
											   MB_ICONQUESTION +
											   MB_DEFBUTTON2) == IDYES) {
												Close();
										   }
}
//---------------------------------------------------------------------------


