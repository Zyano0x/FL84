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
	 * WidgetBlueprintGeneratedClass UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C
	 * Size -> 0x0008 (FullSize[0x0408] - InheritedSize[0x0400])
	 */
	class UUI_Lobby_Mention_Container_C : public USolarUserWidget
	{
	public:
		class UCanvasPanel*                                        CanvasPanel_Container;                                   // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnSolarUIClosed();
		void OnInitialized();
		void OnSolarUIOpened();
		class FString GetModuleName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
