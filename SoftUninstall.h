//---------------------------------------------------------------------------

#ifndef SoftUninstallH
#define SoftUninstallH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TFrmSoftUninstall : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TSplitter *Splitter1;
	TToolBar *ToolBar1;
	TListView *lvUsers;
	TToolButton *ToolButton1;
	TToolButton *ToolButton2;
	TToolButton *ToolButton3;
	TPanel *Panel2;
	TToolBar *ToolBar2;
	TToolButton *ToolButton4;
	TToolButton *ToolButton5;
	TToolButton *ToolButton6;
	TListView *ListView1;
private:	// User declarations
public:		// User declarations
	__fastcall TFrmSoftUninstall(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmSoftUninstall *FrmSoftUninstall;
//---------------------------------------------------------------------------
#endif
