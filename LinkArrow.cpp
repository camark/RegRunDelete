// ---------------------------------------------------------------------------

#include <vcl.h>
#include <registry.hpp>
#include <memory>

#pragma hdrstop

#include "LinkArrow.h"
#include "MsgUtil.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
using namespace std;
TFormLinkArrow *FormLinkArrow;

// ---------------------------------------------------------------------------
__fastcall TFormLinkArrow::TFormLinkArrow(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TFormLinkArrow::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
// ---------------------------------------------------------------------------

void __fastcall TFormLinkArrow::btn1Click(TObject *Sender) {
	unique_ptr<TLinkArrow>linkArrow(new TLinkArrow());
	linkArrow->doExecute();

	MessageUtil::Info(Handle, _T("OK.Please refresh Desktop!"));
}
// ---------------------------------------------------------------------------
