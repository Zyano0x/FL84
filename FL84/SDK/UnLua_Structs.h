#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
		int32_t                                                    None3;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              None4;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FTutorialTableRow                                   None5;                                                   // 0x0000(0x0098) HasGetValueTypeHash
		struct FInputKeyMappingEntry                               None6;                                                   // 0x0000(0x0040) HasGetValueTypeHash
	};

	/**
	 * ScriptStruct UnLua.InSightEvent
	 * Size -> 0x0001
	 */
	struct FInSightEvent
	{
	public:
		unsigned char                                              UnknownData_HSTD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
