#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * ScriptStruct UnLua.PropertyCollector
	 * Size -> 0x0001
	 */
	struct FPropertyCollector
	{
	public:
		ETutorialTriggerType                                       None;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              None2;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              None3;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    None4;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTutorialTableRow                                   None5;                                                   // 0x0000(0x0098) HasGetValueTypeHash
		struct FGateAddress_Dep                                    None6;                                                   // 0x0000(0x0020) HasGetValueTypeHash
		struct FServerInfo_Dep                                     None7;                                                   // 0x0000(0x0050) HasGetValueTypeHash
		struct FInputKeyMappingEntry                               None8;                                                   // 0x0000(0x0040) HasGetValueTypeHash
	};

	/**
	 * ScriptStruct UnLua.InSightEvent
	 * Size -> 0x0001
	 */
	struct FInSightEvent
	{
	public:
		unsigned char                                              UnknownData_94MO[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
