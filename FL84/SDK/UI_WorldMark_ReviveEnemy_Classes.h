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
	 * WidgetBlueprintGeneratedClass UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C
	 * Size -> 0x0070 (FullSize[0x04F0] - InheritedSize[0x0480])
	 */
	class UUI_WorldMark_ReviveEnemy_C : public UActorMarkBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Img_Bg;                                                  // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Light;                                               // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Revival;                                             // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           ScaleBox_1;                                              // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    HideDistance;                                            // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KBCP[0x4];                                   // 0x04AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                Color_2;                                                 // 0x04B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FLinearColor>                                Color_3;                                                 // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              PlayerId;                                                // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DistanceLocalString;                                     // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		ESlateVisibility GetVisibility_1();
		class FText Get_Distance_Text();
		void PreConstruct(bool IsDesignTime);
		void OnInitialized();
		void ExecuteUbergraph_UI_WorldMark_ReviveEnemy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
