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
	 * WidgetBlueprintGeneratedClass UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C
	 * Size -> 0x0059 (FullSize[0x0609] - InheritedSize[0x05B0])
	 */
	class UUI_WorldMark_ReviveTeammates_C : public UWorldMark_ReviveTeammates
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x05B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Arrow;                                               // 0x05C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Arrow_Light_Off;                                     // 0x05C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_BG_Off_2;                                            // 0x05D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_Off_Screen;                                        // 0x05D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    HideDistance;                                            // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HKAF[0x4];                                   // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                Color_2;                                                 // 0x05E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FLinearColor>                                Color_3;                                                 // 0x05F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsOnScreen;                                              // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetIsOnScreen();
		void SetPlayerIDAndChangeColor(const class FString& PlayerId);
		void SetColor(unsigned char Index);
		ESlateVisibility GetVisibility_1();
		void SetIcon(class UWidget* Content, int32_t );
		void PreConstruct(bool IsDesignTime);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnInitialized();
		void SetOutOfScreen(bool OutOfScreen);
		void ExecuteUbergraph_UI_WorldMark_ReviveTeammates(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
