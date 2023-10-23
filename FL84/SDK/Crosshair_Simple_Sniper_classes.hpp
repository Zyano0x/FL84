#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x330 - 0x300)
// WidgetBlueprintGeneratedClass Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C
class UCrosshair_Simple_Sniper_C : public UCrossHairWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Sniper_Anim;                                       // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                SpreadImg_coredot;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_leftarrow;                               // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_rightarrow;                              // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_uparrow;                                 // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCrosshair_Simple_Sniper_C* GetDefaultObj();

	void InitializeCrosshairSpread(float Spread);
	void SetCrosshairSprite(class UPaperSprite* InSprite);
	void ExecuteUbergraph_Crosshair_Simple_Sniper(int32 EntryPoint, class UPaperSprite* K2Node_Event_InSprite, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_1, float K2Node_Event_Spread, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_2, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_3);
};

}


