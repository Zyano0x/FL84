#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class WindowsDeviceProfileSelector.WindowsDeviceProfileMatchingRules
class UWindowsDeviceProfileMatchingRules : public UObject
{
public:
	TArray<struct FWIndowProfileMatchGPU>        MatchProfileGPU;                                   // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWIndowProfileMatchCPU>        MatchProfileCPU;                                   // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWindowsDeviceProfileMatchingRules* GetDefaultObj();

};

}


