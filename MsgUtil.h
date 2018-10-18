//---------------------------------------------------------------------------

#ifndef MsgUtilH
#define MsgUtilH
//---------------------------------------------------------------------------

#include <windows.h>

class MessageUtil{
	public:
		static void __fastcall Info(HWND handle,LPCWSTR Msg)
		{
			MessageBox(handle,
						Msg,
						_T("Information"),
						MB_ICONINFORMATION|MB_OK);
        }
};
#endif
