#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class ProtectBase.ProtectBaseComponent
class UProtectBaseComponent : public UObject
{
public:
	uint8                                        Pad_F51[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProtectBaseComponent* GetDefaultObj();

	class UProtectBaseComponent* GetInstance();
};

// 0x0 (0x28 - 0x28)
// Class ProtectBase.ProtectBaseManager
class UProtectBaseManager : public UObject
{
public:

	static class UClass* StaticClass();
	static class UProtectBaseManager* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class ProtectBase.SecDSComponent
class USecDSComponent : public UObject
{
public:
	uint8                                        Pad_F52[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USecDSComponent* GetDefaultObj();

	class USecDSComponent* GetInstance();
};

}


