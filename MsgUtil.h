// ---------------------------------------------------------------------------

#ifndef MsgUtilH
#define MsgUtilH
// ---------------------------------------------------------------------------

#include <windows.h>

class MessageUtil {
public:
	static void __fastcall Info(HWND handle, LPCWSTR Msg) {
		MessageBox(handle, Msg, _T("Information"), MB_ICONINFORMATION | MB_OK);
	}

	static void __fastcall Warn(HWND handle, LPCWSTR Msg) {
		MessageBox(handle, Msg, _T("Warning"), MB_ICONWARNING | MB_OK);
	}

	static bool __fastcall Question(HWND handle, LPCWSTR Msg) {
		return MessageBox(handle, Msg, _T("Confirm"),
			MB_ICONQUESTION | MB_OKCANCEL) == IDOK;
	}
};
#endif
