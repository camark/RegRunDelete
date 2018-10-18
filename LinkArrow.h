//---------------------------------------------------------------------------

#ifndef LinkArrowH
#define LinkArrowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <registry.hpp>
//---------------------------------------------------------------------------
class TFormLinkArrow : public TForm
{
__published:	// IDE-managed Components
	TButton *btn1;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormLinkArrow(TComponent* Owner);
};

class TLinkArrow: public TObject
{
	private:
		const String valueKey="IsShortcut";

	public:
		void __fastcall doExecute()
		{
			TRegistry* reg=new TRegistry();

			reg->RootKey=HKEY_CLASSES_ROOT;

			if(reg->OpenKey("lnkfile",true))
			{
				reg->DeleteValue(valueKey);
			}

			if(reg->OpenKey("piffile",true))
			{
				reg->DeleteValue(valueKey);
			}

			reg->Free();
		}

		void __fastcall undoExecute()
		{
			TRegistry* reg=new TRegistry();

			reg->RootKey=HKEY_CLASSES_ROOT;

			if(reg->OpenKey("lnkfile",true))
			{
				reg->WriteString(valueKey,"");
			}

			if(reg->OpenKey("piffile",true))
			{
				reg->WriteString(valueKey,"");
			}

			reg->Free();
		}

};
//---------------------------------------------------------------------------
extern PACKAGE TFormLinkArrow *FormLinkArrow;
//---------------------------------------------------------------------------
#endif
