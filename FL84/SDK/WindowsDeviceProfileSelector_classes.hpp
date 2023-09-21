#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class WindowsDeviceProfileSelector.WindowsDeviceProfileMatchingRules
class UWindowsDeviceProfileMatchingRules : public UObject
{
public:
	TArray<struct FWIndowProfileMatch>           MatchProfile;                                      // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWindowsDeviceProfileMatchingRules* GetDefaultObj();

};

}


