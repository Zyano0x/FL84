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
	 * WidgetBlueprintGeneratedClass HUD_OverLoad.HUD_Overload_C
	 * Size -> 0x00D5 (FullSize[0x0335] - InheritedSize[0x0260])
	 */
	class UHUD_Overload_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Overheat_Anim;                                           // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Img_Disable;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Disable_2;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              img_overload;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              img_overload_bg;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              img_overload_Glow;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        OverloadWarning;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FVector2D                                           OverloadImgMaxSize;                                      // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimImgRatio;                                            // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverloadProgress;                                        // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ParentWidget;                                            // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   ColorCurve;                                              // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ShadowSize;                                              // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ImgMaxParmValue;                                         // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ImgParmOffset;                                           // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NewVar_1;                                                // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class UClass*, struct FVector2D>                      CrosshairScaleMapping;                                   // 0x02E0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		float                                                      NewVar_2;                                                // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AlwaysShowOverload;                                      // 0x0334(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PlayOverloadAnima(bool InOverload);
		void SetCoolDownProgress();
		void SetOverLoadImageSize(float InProgress);
		void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup);
		void OnInsufficientAmmo();
		void OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress);
		void OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst);
		void OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress);
		void OnUpdateCoolDown(float InReloadProgress);
		void OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState);
		void OnChangeOverloadState(bool InbQuitState);
		void OnActiveCrosshair(class UUserWidget* InActiveCrosshair);
		void ExecuteUbergraph_HUD_Overload(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
