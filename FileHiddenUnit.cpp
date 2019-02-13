//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FileHiddenUnit.h"
#include "MsgUtil.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHiddenFile *frmHiddenFile;
//---------------------------------------------------------------------------
__fastcall TfrmHiddenFile::TfrmHiddenFile(TComponent* Owner)
	: TForm(Owner)
{
    RootString = "Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced";
}
//---------------------------------------------------------------------------
void __fastcall TfrmHiddenFile::FormCreate(TObject *Sender)
{
	chb_file_ext->Checked=isKeyEqual("HideFileExt",0);

	//chb_sys_file->Checked = isKeyEqual("Hidden",1);

	chb_ord_file->Checked = !isKeyEqual("Hidden",2);
}
//---------------------------------------------------------------------------
void __fastcall TfrmHiddenFile::Button1Click(TObject *Sender)
{
	setKeyValue("HideFileExt",!chb_file_ext->Checked?1:0);

	setKeyValue("Hidden",chb_ord_file->Checked?1:2);

	SendMessage(HWND_BROADCAST,WM_SETTINGCHANGE,NULL,NULL);
	 MessageUtil::Info(Handle,_T("ÐÞ¸Ä³É¹¦£¡"));
}
//---------------------------------------------------------------------------
