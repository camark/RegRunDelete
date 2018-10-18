//---------------------------------------------------------------------------

#include <vcl.h>
#include <memory>
#pragma hdrstop

#include "XMainForm.h"
#include "AutorunRemoveForm.h"
#include "LinkArrow.h"
#include "ABOUT.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
using namespace std;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::btn1Click(TObject *Sender)
{
	TAutorunRemove *autorun=new TAutorunRemove(this);

	autorun->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::actLinkArrowExecute(TObject *Sender)
{
	TFormLinkArrow *arrow = new TFormLinkArrow(this);
	arrow->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::About1Click(TObject *Sender)
{
	TAboutBox* About1(new TAboutBox(this));
	About1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Exit1Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

