//---------------------------------------------------------------------------

#ifndef mainFormH
#define mainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TListView *ListView1;
	TButton *Button1;
	TBitBtn *btn1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall btn1Click(TObject *Sender);
private:	// User declarations
	const String user="用户账号启动";
	const String machine="机器账号启动";
    const String userKey="software\\microsoft\\windows\\currentversion\\run";

	void __fastcall ReadRunKey(bool isUser);
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
