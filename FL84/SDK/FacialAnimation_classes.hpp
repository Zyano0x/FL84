#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x940 - 0x900)
// Class FacialAnimation.AudioCurveSourceComponent
class UAudioCurveSourceComponent : public UAudioComponent
{
public:
	class FName                                  CurveSourceBindingName;                            // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveSyncOffset;                                   // 0x908(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EF[0x34];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioCurveSourceComponent* GetDefaultObj();

};

}


