#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
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
		struct FSettlementReward                                   None;                                                    // 0x0000(0x0008) NoDestructor, HasGetValueTypeHash
		struct FSettlementCrateReward                              None2;                                                   // 0x0000(0x0018) HasGetValueTypeHash
		class UMapMarkBase*                                        None3;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             None4;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETutorialTriggerType                                       None5;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              None6;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              None7;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    None8;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTutorialTableRow                                   None9;                                                   // 0x0000(0x0098) HasGetValueTypeHash
		struct FInputKeyMappingEntry                               None10;                                                  // 0x0000(0x0040) HasGetValueTypeHash
	};

	/**
	 * ScriptStruct UnLua.InSightEvent
	 * Size -> 0x0001
	 */
	struct FInSightEvent
	{
	public:
		unsigned char                                              UnknownData_S509[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
