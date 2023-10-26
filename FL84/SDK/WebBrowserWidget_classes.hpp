#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x1A0 - 0x138)
// Class WebBrowserWidget.WebBrowser
class UWebBrowser : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnUrlChanged;                                      // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeforePopup;                                     // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeforeNavigation;                                // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class FString>                        URLKeywordWithoutNavigation;                       // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InitialURL;                                        // 0x178(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTransparency;                             // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B0D[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebBrowser* GetDefaultObj();

	void StopLoad();
	void SetURLWithoutNavigation(TArray<class FString>& URLs);
	void Reload();
	void OnUrlChanged__DelegateSignature(class FText& Text);
	void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
	void OnBeforeNavigation__DelegateSignature(const class FString& URL);
	void LoadURL(const class FString& NewURL);
	void LoadString(const class FString& Contents, const class FString& DummyURL);
	class FString GetUrl();
	class FText GetTitleText();
	void ExecuteJavascript(const class FString& ScriptText);
	void CloseSelf();
	void BindUObject(const class FString& Name, class UObject* Object, bool bIsPermanent);
};

// 0x50 (0x78 - 0x28)
// Class WebBrowserWidget.WebBrowserAssetManager
class UWebBrowserAssetManager : public UObject
{
public:
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0x28(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B0E[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebBrowserAssetManager* GetDefaultObj();

};

}


