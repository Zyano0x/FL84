#pragma once

/**
 * Name: FL84
 * Version: 15.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct Str_DirectionalLightSetting.Str_DirectionalLightSetting
	 * Size -> 0x0038
	 */
	struct FStr_DirectionalLightSetting
	{
	public:
		struct FRotator                                            LightRotation_2_679B44D14D81D1F251E3DBBC76FA0E60;        // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Intensity_5_6E664CA840353E672B56C7BAEC146E40;            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              LightColor_27_10C0A6C94689142FA397DEA5676FBAF0;          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Temperature_11_824C212841FD90FBABA446940CDBE13B;         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShadowBias_13_FED2F29A4B8FBCD270993591477B57A9;          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShadowSlopeBias_15_7C56CCCB4CEEFA17E67D2195A7AF271E;     // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LightChannel0_24_E3D186BA4C82C6B3BD72FB80ACF787E2;       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       LightChannel1_25_019A668A4DD58574DE0AFDA2E4E3E9F0;       // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       LightChannel2_26_08AE8857406688F44FCD3EACD64C0879;       // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KULP[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DynamicShadowDistanceMovableLight_35_3BB5B38E40806965B2BE7FAE9A5E217E; // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumDynamicShadowCascades_37_AC7F56B040BC6DBB939D1395BFD997C2; // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistributionExponent_41_6B5C490B4EE217C84292669D374C18B3; // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TransitionFraction_42_57ACB1E4497EF7C0F6FC6EB9FF168B67;  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceFadeoutFraction_43_5D6DF3C34F38F6F7AA00B6AEC2D9DE92; // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
