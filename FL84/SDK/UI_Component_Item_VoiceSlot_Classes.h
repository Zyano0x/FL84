#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
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
	 * WidgetBlueprintGeneratedClass UI_Component_Item_VoiceSlot.UI_Component_Item_VoiceSlot_C
	 * Size -> 0x0008 (FullSize[0x0408] - InheritedSize[0x0400])
	 */
	class UUI_Component_Item_VoiceSlot_C : public USolarUserWidget
	{
	public:
		class UImage*                                              img_Hero;                                                // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnInitialized();
		class FString GetModuleName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
