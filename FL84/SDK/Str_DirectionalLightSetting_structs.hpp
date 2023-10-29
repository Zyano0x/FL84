#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// UserDefinedStruct Str_DirectionalLightSetting.Str_DirectionalLightSetting
struct FStr_DirectionalLightSetting
{
public:
	struct FRotator                              LightRotation_2_679B44D14D81D1F251E3DBBC76FA0E60;  // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        Intensity_5_6E664CA840353E672B56C7BAEC146E40;      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                LightColor_27_10C0A6C94689142FA397DEA5676FBAF0;    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temperature_11_824C212841FD90FBABA446940CDBE13B;   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShadowBias_13_FED2F29A4B8FBCD270993591477B57A9;    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShadowSlopeBias_15_7C56CCCB4CEEFA17E67D2195A7AF271E; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LightChannel0_24_E3D186BA4C82C6B3BD72FB80ACF787E2; // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LightChannel1_25_019A668A4DD58574DE0AFDA2E4E3E9F0; // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LightChannel2_26_08AE8857406688F44FCD3EACD64C0879; // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_282E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DynamicShadowDistanceMovableLight_35_3BB5B38E40806965B2BE7FAE9A5E217E; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumDynamicShadowCascades_37_AC7F56B040BC6DBB939D1395BFD997C2; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistributionExponent_41_6B5C490B4EE217C84292669D374C18B3; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionFraction_42_57ACB1E4497EF7C0F6FC6EB9FF168B67; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceFadeoutFraction_43_5D6DF3C34F38F6F7AA00B6AEC2D9DE92; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


