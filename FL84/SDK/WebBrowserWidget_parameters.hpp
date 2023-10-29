#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function WebBrowserWidget.WebBrowser.SetURLWithoutNavigation
struct UWebBrowser_SetURLWithoutNavigation_Params
{
public:
	TArray<class FString>                        URLs;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
struct UWebBrowser_OnUrlChanged__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
struct UWebBrowser_OnBeforePopup__DelegateSignature_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Frame;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforeNavigation__DelegateSignature
struct UWebBrowser_OnBeforeNavigation__DelegateSignature_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function WebBrowserWidget.WebBrowser.LoadURL
struct UWebBrowser_LoadURL_Params
{
public:
	class FString                                NewURL;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function WebBrowserWidget.WebBrowser.LoadString
struct UWebBrowser_LoadString_Params
{
public:
	class FString                                Contents;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DummyURL;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function WebBrowserWidget.WebBrowser.GetUrl
struct UWebBrowser_GetUrl_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function WebBrowserWidget.WebBrowser.GetTitleText
struct UWebBrowser_GetTitleText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
struct UWebBrowser_ExecuteJavascript_Params
{
public:
	class FString                                ScriptText;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function WebBrowserWidget.WebBrowser.BindUObject
struct UWebBrowser_BindUObject_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Object;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPermanent;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


