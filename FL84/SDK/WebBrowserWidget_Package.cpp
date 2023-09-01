/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00BB4F70
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.StopLoad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWebBrowser::StopLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.StopLoad");
		
		UWebBrowser_StopLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4F50
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.Reload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWebBrowser::Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.Reload");
		
		UWebBrowser_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::OnUrlChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature");
		
		UWebBrowser_OnUrlChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature");
		
		UWebBrowser_OnBeforePopup__DelegateSignature_Params params {};
		params.URL = URL;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> DelegateFunction WebBrowserWidget.WebBrowser.OnBeforeNavigation__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::OnBeforeNavigation__DelegateSignature(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnBeforeNavigation__DelegateSignature");
		
		UWebBrowser_OnBeforeNavigation__DelegateSignature_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4E60
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.LoadURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NewURL                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::LoadURL(const class FString& NewURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadURL");
		
		UWebBrowser_LoadURL_Params params {};
		params.NewURL = NewURL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4CE0
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.LoadString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Contents                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DummyURL                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::LoadString(const class FString& Contents, const class FString& DummyURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadString");
		
		UWebBrowser_LoadString_Params params {};
		params.Contents = Contents;
		params.DummyURL = DummyURL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4C60
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.GetUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UWebBrowser::GetUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetUrl");
		
		UWebBrowser_GetUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4BC0
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.GetTitleText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UWebBrowser::GetTitleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetTitleText");
		
		UWebBrowser_GetTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4B20
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.ExecuteJavascript
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ScriptText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::ExecuteJavascript(const class FString& ScriptText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.ExecuteJavascript");
		
		UWebBrowser_ExecuteJavascript_Params params {};
		params.ScriptText = ScriptText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4B00
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.CloseSelf
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWebBrowser::CloseSelf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.CloseSelf");
		
		UWebBrowser_CloseSelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB49D0
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.BindUObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsPermanent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::BindUObject(const class FString& Name, class UObject* Object, bool bIsPermanent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.BindUObject");
		
		UWebBrowser_BindUObject_Params params {};
		params.Name = Name;
		params.Object = Object;
		params.bIsPermanent = bIsPermanent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWebBrowser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebBrowser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WebBrowserWidget.WebBrowser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWebBrowserAssetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebBrowserAssetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WebBrowserWidget.WebBrowserAssetManager");
		return ptr;
	}

}


