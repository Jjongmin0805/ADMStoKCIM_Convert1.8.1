
// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �� ������Ʈ ���� ���� ������ 
// ��� �ִ� ���� �����Դϴ�.

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // ���� ������ �ʴ� ������ Windows ������� �����մϴ�.
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // �Ϻ� CString �����ڴ� ��������� ����˴ϴ�.

// MFC�� ���� �κа� ���� ������ ��� �޽����� ���� ����⸦ �����մϴ�.
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC �ٽ� �� ǥ�� ���� ����Դϴ�.
#include <afxext.h>         // MFC Ȯ���Դϴ�.


#include <afxdisp.h>        // MFC �ڵ�ȭ Ŭ�����Դϴ�.

#include <afxdb.h>

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // Internet Explorer 4 ���� ��Ʈ�ѿ� ���� MFC �����Դϴ�.
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // Windows ���� ��Ʈ�ѿ� ���� MFC �����Դϴ�.
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // MFC�� ���� �� ��Ʈ�� ���� ����

#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS

// #include <list>
 #include <vector>
// #include <map>
// #include <set>
// #include <algorithm>
 #include <string>
 #include <hash_map>
 #include <hash_set>
// #include <assert.h>
 #include <unordered_map>
using namespace std;

#pragma warning( disable : 4477 )
#pragma warning( disable : 4244 )

#include "../Include/CommonVerFile.h"
#ifdef _APPGOVERNOR_COM_VER_
	#include "../PUSDT_PCommManager/CommonFile.h"
	#include "../PUSDT_PCommManager/PSM_Util.h"
#else
	#include "../Include/PUSDT_PCommManager/CommonFile.h"
	#include "../Include/PUSDT_PCommManager/PSM_Util.h"
#endif
// #include "../Include/PUSDT_PCommManager/SAXMgr.h"
// #include "../Include/PUSDT_PCommManager/FileMapObject.h"
// #include "../Include/PUSDT_PCommManager/ObjMng.h"
// #include "../Include/AppCDataManager/PAppDataObj_Common.h"
// #include "../Include/AppCDataManager/PAppDataObjMng.h"
#include "../Include/DBContainer/CommonFile.h"
#include "../Include/DBContainer/DBContainer_Insatnce.h"

// #include "../include/PNOVR_Ctrl/CommonHeader.h"
// #include "../include/PNOVR_Ctrl/Ctrl_Manager.h"
// #include "../include/PNOVR_Ctrl/Util_Manager.h"


#ifdef _DEBUG
#ifdef _APPGOVERNOR_COM_VER_
	#pragma comment( lib, "../Bin/x64/Debug/PUSDT_PCommManager.lib" )
#else
	#pragma comment( lib, "../Lib/x64/Debug/PUSDT_PCommManager.lib" )
#endif
// #pragma comment( lib, "../Lib/x64/Debug/AppCDataManager.lib" )
// #pragma comment( lib, "../lib/PNOVR_Ctrl/Debug/PNOVR_Ctrl.lib" )
#pragma comment( lib, "../Lib/x64/Debug/DBContainer.lib" )
#else
#ifdef _APPGOVERNOR_COM_VER_
	#pragma comment( lib, "../Bin/x64/Release/PUSDT_PCommManager.lib" )
#else
	#pragma comment( lib, "../Lib/x64/Release/PUSDT_PCommManager.lib" )
#endif
// #pragma comment( lib, "../Lib/x64/Release/AppCDataManager.lib" )
// #pragma comment( lib, "../lib/PNOVR_Ctrl/Release/PNOVR_Ctrl.lib" )
#pragma comment( lib, "../Lib/x64/Release/DBContainer.lib" )

#endif

#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


typedef CArray<int, int&> CIntArray;
