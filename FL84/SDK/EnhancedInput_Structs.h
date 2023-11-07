﻿#pragma once

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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum EnhancedInput.EInputActionValueType
	 */
	enum class EInputActionValueType : uint8_t
	{
		Boolean = 0,
		Axis1D  = 1,
		Axis2D  = 2,
		Axis3D  = 3,
		MAX     = 4
	};

	/**
	 * Enum EnhancedInput.EMappingQueryIssue
	 */
	enum class EMappingQueryIssue : uint8_t
	{
		NoIssue                           = 0,
		ReservedByAction                  = 1,
		HidesExistingMapping              = 2,
		HiddenByExistingMapping           = 3,
		CollisionWithMappingInSameContext = 4,
		ForcesTypePromotion               = 5,
		ForcesTypeDemotion                = 6,
		MAX                               = 7
	};

	/**
	 * Enum EnhancedInput.EMappingQueryResult
	 */
	enum class EMappingQueryResult : uint8_t
	{
		Error_EnhancedInputNotEnabled         = 0,
		Error_InputContextNotInActiveContexts = 1,
		Error_InvalidAction                   = 2,
		NotMappable                           = 3,
		MappingAvailable                      = 4,
		MAX                                   = 5
	};

	/**
	 * Enum EnhancedInput.EInputAxisSwizzle
	 */
	enum class EInputAxisSwizzle : uint8_t
	{
		YXZ = 0,
		ZYX = 1,
		XZY = 2,
		YZX = 3,
		ZXY = 4,
		MAX = 5
	};

	/**
	 * Enum EnhancedInput.EFOVScalingType
	 */
	enum class EFOVScalingType : uint8_t
	{
		Standard       = 0,
		UE4_BackCompat = 1,
		MAX            = 2
	};

	/**
	 * Enum EnhancedInput.EDeadZoneType
	 */
	enum class EDeadZoneType : uint8_t
	{
		Axial  = 0,
		Radial = 1,
		MAX    = 2
	};

	/**
	 * Enum EnhancedInput.EModifierExecutionPhase
	 */
	enum class EModifierExecutionPhase : uint8_t
	{
		PerInput   = 0,
		FinalValue = 1,
		NumPhases  = 2,
		MAX        = 3
	};

	/**
	 * Enum EnhancedInput.ETriggerTypeEx
	 */
	enum class ETriggerTypeEx : uint8_t
	{
		Explicit = 0,
		Implicit = 1,
		Blocker  = 2,
		MAX      = 3
	};

	/**
	 * Enum EnhancedInput.ETriggerEvent
	 */
	enum class ETriggerEvent : uint8_t
	{
		None      = 0,
		Started   = 1,
		Ongoing   = 2,
		Canceled  = 3,
		Triggered = 4,
		Completed = 5,
		MAX       = 6
	};

	/**
	 * Enum EnhancedInput.ETriggerState
	 */
	enum class ETriggerState : uint8_t
	{
		None      = 0,
		Ongoing   = 1,
		Triggered = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
	 * Size -> 0x0018
	 */
	struct FBlueprintEnhancedInputActionBinding
	{
	public:
		class UInputAction*                                        InputAction;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETriggerEvent                                              TriggerEvent;                                            // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOBT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HM6I[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.EnhancedActionKeyMapping
	 * Size -> 0x0048
	 */
	struct FEnhancedActionKeyMapping
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldBeIgnored : 1;                                    // 0x0020(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRVW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EnhancedInput.InputActionInstance
	 * Size -> 0x0070
	 */
	struct FInputActionInstance
	{
	public:
		class UInputAction*                                        SourceAction;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D9PG[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0010(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0020(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UInputModifier*>                              PerInputModifiers;                                       // 0x0030(0x0010) ZeroConstructor, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UInputModifier*>                              FinalValueModifiers;                                     // 0x0040(0x0010) ZeroConstructor, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9AE3[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ElapsedProcessedTime;                                    // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElapsedTriggeredTime;                                    // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETriggerEvent                                              TriggerEvent;                                            // 0x0068(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_96BO[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
	 * Size -> 0x0030
	 */
	struct FBlueprintInputDebugKeyDelegateBinding
	{
	public:
		struct FInputChord                                         InputChord;                                              // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputEvent                                                InputKeyEvent;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUY4[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExecuteWhenPaused;                                      // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZY6[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.InputActionValue
	 * Size -> 0x0010
	 */
	struct FInputActionValue
	{
	public:
		unsigned char                                              UnknownData_J430[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.MappingQueryIssue
	 * Size -> 0x0018
	 */
	struct FMappingQueryIssue
	{
	public:
		EMappingQueryIssue                                         Issue;                                                   // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4057[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMappingContext*                                BlockingContext;                                         // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInputAction*                                        BlockingAction;                                          // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif