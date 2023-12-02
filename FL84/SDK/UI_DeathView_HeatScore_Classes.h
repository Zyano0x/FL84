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
	 * WidgetBlueprintGeneratedClass UI_DeathView_HeatScore.UI_DeathView_HeatScore_C
	 * Size -> 0x0021 (FullSize[0x0421] - InheritedSize[0x0400])
	 */
	class UUI_DeathView_HeatScore_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HeatHorizontalBox;                                       // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_LikeValue;                                           // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DeathView_Heat_Notice_C*                         UI_DeathView_Heat_Notice;                                // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ET_Type_Gift                                               Type_Gift;                                               // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnWatchingFriendCountChanged_4A11C1094CCBF02B3D6187ADAA281EE2(int32_t WatchingFriendCount);
		void Destruct();
		void OnInitialized();
		void Construct();
		class FString GetModuleName();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_DeathView_HeatScore(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
