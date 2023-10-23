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
// Function DTBPJson.DTBPJsonBPLib.StructToJson
struct UDTBPJsonBPLib_StructToJson_Params
{
public:
	struct FDTStruct                             Struct;                                            // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Json;                                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PrettyPrint;                                       // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function DTBPJson.DTBPJsonBPLib.JsonToStruct
struct UDTBPJsonBPLib_JsonToStruct_Params
{
public:
	struct FDTStruct                             Struct;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A80[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Json;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


