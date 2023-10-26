#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class RichtapToolsLib.RichtapClip
class URichtapClip : public UObject
{
public:
	uint8                                        Pad_AEF[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ClipData;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AF0[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URichtapClip* GetDefaultObj();

};

}


