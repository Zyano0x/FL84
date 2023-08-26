#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WebBrowserWidget.WebBrowser.StopLoad
	 */
	struct UWebBrowser_StopLoad_Params
	{	};

	/**
	 * Function WebBrowserWidget.WebBrowser.Reload
	 */
	struct UWebBrowser_Reload_Params
	{	};

	/**
	 * DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	 */
	struct UWebBrowser_OnUrlChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	 */
	struct UWebBrowser_OnBeforePopup__DelegateSignature_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Frame;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction WebBrowserWidget.WebBrowser.OnBeforeNavigation__DelegateSignature
	 */
	struct UWebBrowser_OnBeforeNavigation__DelegateSignature_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WebBrowserWidget.WebBrowser.LoadURL
	 */
	struct UWebBrowser_LoadURL_Params
	{
	public:
		class FString                                              NewURL;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WebBrowserWidget.WebBrowser.LoadString
	 */
	struct UWebBrowser_LoadString_Params
	{
	public:
		class FString                                              Contents;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DummyURL;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WebBrowserWidget.WebBrowser.GetUrl
	 */
	struct UWebBrowser_GetUrl_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WebBrowserWidget.WebBrowser.GetTitleText
	 */
	struct UWebBrowser_GetTitleText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WebBrowserWidget.WebBrowser.ExecuteJavascript
	 */
	struct UWebBrowser_ExecuteJavascript_Params
	{
	public:
		class FString                                              ScriptText;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WebBrowserWidget.WebBrowser.CloseSelf
	 */
	struct UWebBrowser_CloseSelf_Params
	{	};

	/**
	 * Function WebBrowserWidget.WebBrowser.BindUObject
	 */
	struct UWebBrowser_BindUObject_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsPermanent;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
