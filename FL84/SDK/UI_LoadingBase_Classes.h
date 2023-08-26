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
	 * WidgetBlueprintGeneratedClass UI_LoadingBase.UI_LoadingBase_C
	 * Size -> 0x0008 (FullSize[0x04B0] - InheritedSize[0x04A8])
	 */
	class UUI_LoadingBase_C : public ULoadingUIBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void StartLoading();
		void FinishLoading();
		void ExecuteUbergraph_UI_LoadingBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
