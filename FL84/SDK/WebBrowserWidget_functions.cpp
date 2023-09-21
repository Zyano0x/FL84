#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WebBrowserWidget.WebBrowser
// (None)

class UClass* UWebBrowser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebBrowser");

	return Clss;
}


// WebBrowser WebBrowserWidget.Default__WebBrowser
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebBrowser* UWebBrowser::GetDefaultObj()
{
	static class UWebBrowser* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebBrowser*>(UWebBrowser::StaticClass()->DefaultObject);

	return Default;
}


// Function WebBrowserWidget.WebBrowser.StopLoad
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWebBrowser::StopLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "StopLoad");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function WebBrowserWidget.WebBrowser.SetURLWithoutNavigation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              URLs                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::SetURLWithoutNavigation(TArray<class FString>& URLs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "SetURLWithoutNavigation");

	Params::UWebBrowser_SetURLWithoutNavigation_Params Parms{};

	Parms.URLs = URLs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WebBrowserWidget.WebBrowser.Reload
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWebBrowser::Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "Reload");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UWebBrowser::OnUrlChanged__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "OnUrlChanged__DelegateSignature");

	Params::UWebBrowser_OnUrlChanged__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Frame                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "OnBeforePopup__DelegateSignature");

	Params::UWebBrowser_OnBeforePopup__DelegateSignature_Params Parms{};

	Parms.URL = URL;
	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforeNavigation__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::OnBeforeNavigation__DelegateSignature(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "OnBeforeNavigation__DelegateSignature");

	Params::UWebBrowser_OnBeforeNavigation__DelegateSignature_Params Parms{};

	Parms.URL = URL;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WebBrowserWidget.WebBrowser.LoadURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewURL                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::LoadURL(const class FString& NewURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "LoadURL");

	Params::UWebBrowser_LoadURL_Params Parms{};

	Parms.NewURL = NewURL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WebBrowserWidget.WebBrowser.LoadString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Contents                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DummyURL                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::LoadString(const class FString& Contents, const class FString& DummyURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "LoadString");

	Params::UWebBrowser_LoadString_Params Parms{};

	Parms.Contents = Contents;
	Parms.DummyURL = DummyURL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WebBrowserWidget.WebBrowser.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWebBrowser::GetUrl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "GetUrl");

	Params::UWebBrowser_GetUrl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WebBrowserWidget.WebBrowser.GetTitleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UWebBrowser::GetTitleText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "GetTitleText");

	Params::UWebBrowser_GetTitleText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ScriptText                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::ExecuteJavascript(const class FString& ScriptText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "ExecuteJavascript");

	Params::UWebBrowser_ExecuteJavascript_Params Parms{};

	Parms.ScriptText = ScriptText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WebBrowserWidget.WebBrowser.CloseSelf
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWebBrowser::CloseSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "CloseSelf");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function WebBrowserWidget.WebBrowser.BindUObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsPermanent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::BindUObject(const class FString& Name, class UObject* Object, bool bIsPermanent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser", "BindUObject");

	Params::UWebBrowser_BindUObject_Params Parms{};

	Parms.Name = Name;
	Parms.Object = Object;
	Parms.bIsPermanent = bIsPermanent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class WebBrowserWidget.WebBrowserAssetManager
// (None)

class UClass* UWebBrowserAssetManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebBrowserAssetManager");

	return Clss;
}


// WebBrowserAssetManager WebBrowserWidget.Default__WebBrowserAssetManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebBrowserAssetManager* UWebBrowserAssetManager::GetDefaultObj()
{
	static class UWebBrowserAssetManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebBrowserAssetManager*>(UWebBrowserAssetManager::StaticClass()->DefaultObject);

	return Default;
}

}


