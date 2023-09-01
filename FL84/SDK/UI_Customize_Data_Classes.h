#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * WidgetBlueprintGeneratedClass UI_Customize_Data.UI_Customize_Data_C
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class UUI_Customize_Data_C : public UUserWidget
	{
	public:
		TArray<struct FS_Customize_Element>                        ElementConfig;                                           // 0x0260(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
