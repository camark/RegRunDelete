//---------------------------------------------------------------------------

#ifndef FileHiddenUnitH
#define FileHiddenUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Registry.hpp>
//---------------------------------------------------------------------------
class TfrmHiddenFile : public TForm
{
__published:	// IDE-managed Components
	TCheckBox *chb_file_ext;
	TCheckBox *chb_ord_file;
	TButton *Button1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
	String RootString;

	bool isKeyEqual(String key,int EqualValue)
	{
		TRegistry *reg=new TRegistry();

		bool bRet=false;

		if(reg->OpenKey(RootString,false)){
			int iValue=reg->ReadInteger(key);

			bRet=iValue==EqualValue;
		}

		reg->Free();

		return bRet;
	}

	void setKeyValue(String key,int value)
	{
		TRegistry *reg=new TRegistry();

		bool bRet=false;

		if(reg->OpenKey(RootString,false)){
			reg->WriteInteger(key,value);
		}

		reg->Free();
	}
public:		// User declarations
	__fastcall TfrmHiddenFile(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHiddenFile *frmHiddenFile;
//---------------------------------------------------------------------------
#endif
