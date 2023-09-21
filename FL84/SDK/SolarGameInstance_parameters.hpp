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

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName
struct USolarGameInstance_C_LuaGetBroadcastPlayerName_Params
{
public:
	class FString                                SolarPlayerID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                BroadcastPlayerName;                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName
struct USolarGameInstance_C_LuaGetBroadcastHeroName_Params
{
public:
	class FString                                SolarPlayerID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                BroadcastPlayerName;                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance
struct USolarGameInstance_C_ExecuteUbergraph_SolarGameInstance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


