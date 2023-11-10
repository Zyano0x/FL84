#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Class TemplateLoadingSystem.LoadingScreenSubsystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class ULoadingScreenSubsystem : public UGameInstanceSubsystem
	{
	public:
		class ULoadingWidgetBase*                                  LoadingWidget;                                           // 0x0030(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8JO6[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		void StopLoadingScreen();
		class ULoadingWidgetBase* StartLoadingScreen(class UClass* InWidgetClass);
		class ULoadingScreenSubsystem* STATIC_Get(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateLoadingSystem.LoadingWidgetBase
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class ULoadingWidgetBase : public UUserWidget
	{
	public:
		void LoadingStarted();
		void LoadingFinished();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
