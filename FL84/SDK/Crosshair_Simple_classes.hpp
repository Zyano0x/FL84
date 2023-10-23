#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x338 - 0x300)
// WidgetBlueprintGeneratedClass Crosshair_Simple.Crosshair_Simple_C
class UCrosshair_Simple_C : public UCrossHairWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Simple_Anim;                                       // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                SpreadImg_coredot;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_downarrow;                               // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_leftarrow;                               // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_rightarrow;                              // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_uparrow;                                 // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCrosshair_Simple_C* GetDefaultObj();

	void InitializeCrosshairSpread(float Spread);
	void SetCrosshairSprite(class UPaperSprite* InSprite);
	void ExecuteUbergraph_Crosshair_Simple(int32 EntryPoint, class UPaperSprite* K2Node_Event_InSprite, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_1, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_2, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_3, float K2Node_Event_Spread, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3);
};

}


