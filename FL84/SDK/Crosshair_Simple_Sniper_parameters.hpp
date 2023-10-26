#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.InitializeCrosshairSpread
struct UCrosshair_Simple_Sniper_C_InitializeCrosshairSpread_Params
{
public:
	float                                        Spread;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.SetCrosshairSprite
struct UCrosshair_Simple_Sniper_C_SetCrosshairSprite_Params
{
public:
	class UPaperSprite*                          InSprite;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.ExecuteUbergraph_Crosshair_Simple_Sniper
struct UCrosshair_Simple_Sniper_C_ExecuteUbergraph_Crosshair_Simple_Sniper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_118E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperSprite*                          K2Node_Event_InSprite;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_1; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_Spread;                               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1193[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_2; // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_3; // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


