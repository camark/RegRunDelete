//---------------------------------------------------------------------------

#ifndef XMainFormH
#define XMainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TStatusBar *stat1;
	TToolBar *tlb1;
	TToolButton *btnAutoRun;
	TActionList *actlst1;
	TImageList *il1;
	TAction *actAutoRun;
	TAction *actLinkArrow;
	TMainMenu *mm1;
	TMenuItem *System1;
	TMenuItem *Exit1;
	TToolButton *btnLinkArrow;
	TMenuItem *Help1;
	TMenuItem *About1;
	void __fastcall btn1Click(TObject *Sender);
	void __fastcall actLinkArrowExecute(TObject *Sender);
	void __fastcall About1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
