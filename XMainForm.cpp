// ---------------------------------------------------------------------------

#include <vcl.h>
#include <memory>
#pragma hdrstop

#include "XMainForm.h"
#include "AutorunRemoveForm.h"
#include "LinkArrow.h"
#include "ABOUT.h"
#include "MsgUtil.h"
#include "FileHiddenUnit.h"
#include "SoftUninstall.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TXFormMain *XFormMain;
using namespace std;

// ---------------------------------------------------------------------------
__fastcall TXFormMain::TXFormMain(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TXFormMain::btn1Click(TObject *Sender) {
	TAutorunRemove *autorun = new TAutorunRemove(this);

	autorun->Show();
}

// ---------------------------------------------------------------------------
void __fastcall TXFormMain::actLinkArrowExecute(TObject *Sender) {
	TFormLinkArrow *arrow = new TFormLinkArrow(this);
	arrow->Show();
}

// ---------------------------------------------------------------------------
void __fastcall TXFormMain::About1Click(TObject *Sender) {
	TAboutBox* About1(new TAboutBox(this));
	About1->Show();
}
// ---------------------------------------------------------------------------

void __fastcall TXFormMain::Exit1Click(TObject *Sender) {
	/* auto i=5;

	 auto b={1,2,3,4,200};
	 auto sum=0;
	 for(auto c:b)
	 {
	 sum+=c;
	 }

	 String msg=IntToStr(sum);
	 MessageUtil::Info(Handle,msg.w_str()); */
	Close();
}
// ---------------------------------------------------------------------------
void __fastcall TXFormMain::ToolButton1Click(TObject *Sender)
{
	TfrmHiddenFile *hiddenfile=new TfrmHiddenFile(this);
	hiddenfile->Show();
}
//---------------------------------------------------------------------------


void __fastcall TXFormMain::ToolButton2Click(TObject *Sender)
{
	TFrmSoftUninstall *childFrm = new TFrmSoftUninstall(this);
	childFrm->Show();
}
//---------------------------------------------------------------------------

