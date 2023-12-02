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
	 * WidgetBlueprintGeneratedClass UI_TeamInvite_Container.UI_TeamInvite_Container_C
	 * Size -> 0x0028 (FullSize[0x0428] - InheritedSize[0x0400])
	 */
	class UUI_TeamInvite_Container_C : public USolarUserWidget
	{
	public:
		class UCanvasPanel*                                        Adapter;                                                 // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_Container;                                   // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel;                                                   // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Lobby_RoomInvite_MIni_Popup_C*                   UI_Lobby_RoomInvite_MIni_Popup;                          // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Lobby_TeamInvite_Mini_Popup_C*                   UI_Lobby_TeamInvite_Mini_Popup;                          // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnSolarUIOpened();
		void OnShow();
		void OnHide();
		void OnInitialized();
		void OnSolarUIClosed();
		class FString GetModuleName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
