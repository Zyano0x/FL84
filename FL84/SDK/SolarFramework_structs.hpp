#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EScope : uint8
{
	None                           = 0,
	Login                          = 1,
	Lobby                          = 2,
	Battle                         = 4,
	Settlement                     = 8,
	Game                           = 14,
	Global                         = 15,
	EScope_MAX                     = 16,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct SolarFramework.SolarConfigEntry
struct FSolarConfigEntry
{
public:
	TSoftClassPtr<class USolarContainer>         ContainerPath;                                     // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScope                            Scope;                                             // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1641[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


