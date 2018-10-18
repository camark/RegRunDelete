//---------------------------------------------------------------------------

#ifndef AutorunRemoveFormH
#define AutorunRemoveFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TAutorunRemove : public TForm
{
__published:	// IDE-managed Components
	TListView *lv1;
	TToolBar *tlb1;
	TToolButton *btn1;
	TImageList *il1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btn2Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
	const String user="CurrentUser";
	const String machine="LocalMachine";
    const String userKey="software\\microsoft\\windows\\currentversion\\run";

	void __fastcall ReadRunKey(bool isUser);
public:		// User declarations
	__fastcall TAutorunRemove(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAutorunRemove *AutorunRemove;
//---------------------------------------------------------------------------
#endif
