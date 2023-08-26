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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class WebBrowserWidget.WebBrowser
	 * Size -> 0x0058 (FullSize[0x0190] - InheritedSize[0x0138])
	 */
	class UWebBrowser : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnUrlChanged;                                            // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeforePopup;                                           // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeforeNavigation;                                      // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              InitialURL;                                              // 0x0168(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSupportsTransparency;                                   // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5P5S[0x17];                                  // 0x0179(0x0017) MISSED OFFSET (PADDING)

	public:
		void StopLoad();
		void Reload();
		void OnUrlChanged__DelegateSignature(const class FText& Text);
		void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
		void OnBeforeNavigation__DelegateSignature(const class FString& URL);
		void LoadURL(const class FString& NewURL);
		void LoadString(const class FString& Contents, const class FString& DummyURL);
		class FString GetUrl();
		class FText GetTitleText();
		void ExecuteJavascript(const class FString& ScriptText);
		void CloseSelf();
		void BindUObject(const class FString& Name, class UObject* Object, bool bIsPermanent);
		static UClass* StaticClass();
	};

	/**
	 * Class WebBrowserWidget.WebBrowserAssetManager
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UWebBrowserAssetManager : public UObject
	{
	public:
		unsigned char                                              DefaultMaterial[0x28];                                   // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_AYBI[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
