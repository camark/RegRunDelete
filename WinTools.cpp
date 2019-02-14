// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
// ---------------------------------------------------------------------------
USEFORM("XMainForm.cpp", XFormMain);
USEFORM("ABOUT.cpp", AboutBox);
USEFORM("AutorunRemoveForm.cpp", AutorunRemove);
USEFORM("FileHiddenUnit.cpp", frmHiddenFile);
USEFORM("LinkArrow.cpp", FormLinkArrow);
USEFORM("SoftUninstall.cpp", FrmSoftUninstall);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int) {
	try {
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TXFormMain), &XFormMain);
		Application->CreateForm(__classid(TAboutBox), &AboutBox);
		Application->CreateForm(__classid(TfrmHiddenFile), &frmHiddenFile);
		Application->CreateForm(__classid(TFrmSoftUninstall), &FrmSoftUninstall);
		Application->Run();
	}
	catch (Exception &exception) {
		Application->ShowException(&exception);
	}
	catch (...) {
		try {
			throw Exception("");
		}
		catch (Exception &exception) {
			Application->ShowException(&exception);
		}
	}
	return 0;
}
// ---------------------------------------------------------------------------
