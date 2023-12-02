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
	 * WidgetBlueprintGeneratedClass UI_LobbyBase.UI_LobbyBase_C
	 * Size -> 0x0008 (FullSize[0x0458] - InheritedSize[0x0450])
	 */
	class UUI_LobbyBase_C : public USolarPanelWidget
	{
	public:
		class UPanelWidget*                                        VideoWrapper;                                            // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitLobbyBase(class UPanelWidget* InVideo);
		void AddVideoPanel();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
