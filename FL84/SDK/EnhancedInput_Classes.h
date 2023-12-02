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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class EnhancedInput.EnhancedInputActionDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
	{
	public:
		TArray<struct FBlueprintEnhancedInputActionBinding>        InputActionDelegateBindings;                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputActionValueBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEnhancedInputActionValueBinding : public UInputDelegateBinding
	{
	public:
		TArray<struct FBlueprintEnhancedInputActionBinding>        InputActionValueBindings;                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputComponent
	 * Size -> 0x0030 (FullSize[0x0168] - InheritedSize[0x0138])
	 */
	class UEnhancedInputComponent : public UInputComponent
	{
	public:
		unsigned char                                              UnknownData_NQYG[0x30];                                  // 0x0138(0x0030) MISSED OFFSET (PADDING)

	public:
		struct FInputActionValue GetBoundActionValue(class UInputAction* Action);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately);
		struct FInputActionValue STATIC_MakeInputActionValue(float X, float Y, float Z, const struct FInputActionValue& MatchValueType);
		struct FInputActionValue STATIC_GetBoundActionValue(class AActor* Actor, class UInputAction* Action);
		bool STATIC_Conv_InputActionValueToBool(const struct FInputActionValue& InValue);
		struct FVector STATIC_Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue);
		struct FVector2D STATIC_Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue);
		float STATIC_Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue);
		void STATIC_BreakInputActionValue(const struct FInputActionValue& InActionValue, float* X, float* Y, float* Z);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputSubsystemInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnhancedInputSubsystemInterface : public UInterface
	{
	public:
		void RequestRebuildControlMappings(bool bForceImmediately);
		void RemoveMappingContext(class UInputMappingContext* MappingContext);
		EMappingQueryResult QueryMapKeyInContextSet(TArray<class UInputMappingContext*> PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues);
		EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues);
		TArray<struct FKey> QueryKeysMappedToAction(class UInputAction* Action);
		bool HasMappingContext(class UInputMappingContext* MappingContext);
		void ClearAllMappings();
		void AddMappingContext(class UInputMappingContext* MappingContext, int32_t Priority);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
	 * Size -> 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
	 */
	class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
	{
	public:
		unsigned char                                              UnknownData_B2OG[0xB0];                                  // 0x0030(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputEngineSubsystem
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UEnhancedInputEngineSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_EZFV[0xB0];                                  // 0x0030(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnhancedPlayerInput*                                PlayerInput;                                             // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedPlayerInput
	 * Size -> 0x0258 (FullSize[0x0600] - InheritedSize[0x03A8])
	 */
	class UEnhancedPlayerInput : public UPlayerInput
	{
	public:
		TMap<class UInputMappingContext*, int32_t>                 AppliedInputContexts;                                    // 0x03A8(0x0050) Transient, NativeAccessSpecifierPrivate
		TArray<struct FEnhancedActionKeyMapping>                   EnhancedActionMappings;                                  // 0x03F8(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4VK0[0x50];                                  // 0x0408(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UInputAction*, struct FInputActionInstance>     ActionInstanceData;                                      // 0x0458(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LZ9J[0x158];                                 // 0x04A8(0x0158) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputAction
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UInputAction : public UDataAsset
	{
	public:
		bool                                                       bConsumeInput;                                           // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggerWhenPaused;                                      // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReserveAllMappings;                                     // 0x0032(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputActionValueType                                      ValueType;                                               // 0x0033(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q74J[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputDebugKeyDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
	{
	public:
		TArray<struct FBlueprintInputDebugKeyDelegateBinding>      InputDebugKeyDelegateBindings;                           // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputMappingContext
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UInputMappingContext : public UDataAsset
	{
	public:
		TArray<struct FEnhancedActionKeyMapping>                   Mappings;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                ContextDescription;                                      // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		void UnmapKey(class UInputAction* Action, const struct FKey& Key);
		void UnmapAll();
		void UnmapAction(class UInputAction* Action);
		struct FEnhancedActionKeyMapping MapKey(class UInputAction* Action, const struct FKey& ToKey);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifier
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputModifier : public UObject
	{
	public:
		struct FInputActionValue ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime);
		struct FLinearColor GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue);
		EModifierExecutionPhase GetExecutionPhase();
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierDeadZone
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInputModifierDeadZone : public UInputModifier
	{
	public:
		float                                                      LowerThreshold;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpperThreshold;                                          // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDeadZoneType                                              Type;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1QJ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierScalar
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInputModifierScalar : public UInputModifier
	{
	public:
		struct FVector                                             Scalar;                                                  // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNP6[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierNegate
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInputModifierNegate : public UInputModifier
	{
	public:
		bool                                                       bX;                                                      // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bY;                                                      // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bZ;                                                      // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9GC3[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierSmooth
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UInputModifierSmooth : public UInputModifier
	{
	public:
		unsigned char                                              UnknownData_7C36[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierResponseCurveExponential
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInputModifierResponseCurveExponential : public UInputModifier
	{
	public:
		struct FVector                                             CurveExponent;                                           // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F1KS[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierResponseCurveUser
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInputModifierResponseCurveUser : public UInputModifier
	{
	public:
		class UCurveFloat*                                         ResponseX;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ResponseY;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ResponseZ;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierFOVScaling
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInputModifierFOVScaling : public UInputModifier
	{
	public:
		float                                                      FOVScale;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFOVScalingType                                            FOVScalingType;                                          // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S7HZ[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierToWorldSpace
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputModifierToWorldSpace : public UInputModifier
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierSwizzleAxis
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInputModifierSwizzleAxis : public UInputModifier
	{
	public:
		EInputAxisSwizzle                                          Order;                                                   // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYWK[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierCollection
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInputModifierCollection : public UInputModifier
	{
	public:
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPermitValueTypeModification;                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5AEC[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTrigger
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInputTrigger : public UObject
	{
	public:
		float                                                      ActuationThreshold;                                      // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputActionValue                                   LastValue;                                               // 0x002C(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1M5[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		ETriggerState UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime);
		bool IsActuated(const struct FInputActionValue& ForValue);
		ETriggerTypeEx GetTriggerType();
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerTimedBase
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UInputTriggerTimedBase : public UInputTrigger
	{
	public:
		float                                                      HeldDuration;                                            // 0x0040(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAffectedByTimeDilation;                                 // 0x0044(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QOIT[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerDown
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UInputTriggerDown : public UInputTrigger
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerPressed
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UInputTriggerPressed : public UInputTrigger
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerReleased
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UInputTriggerReleased : public UInputTrigger
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerHold
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UInputTriggerHold : public UInputTriggerTimedBase
	{
	public:
		unsigned char                                              UnknownData_I2RW[0x4];                                   // 0x0048(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoldTimeThreshold;                                       // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOneShot;                                              // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6XSB[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerHoldAndRelease
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
	{
	public:
		float                                                      HoldTimeThreshold;                                       // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1KRE[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerTap
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UInputTriggerTap : public UInputTriggerTimedBase
	{
	public:
		float                                                      TapReleaseTimeThreshold;                                 // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXNG[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerPulse
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UInputTriggerPulse : public UInputTriggerTimedBase
	{
	public:
		unsigned char                                              UnknownData_SB1Z[0x4];                                   // 0x0048(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bTriggerOnStart;                                         // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YM0Y[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Interval;                                                // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TriggerLimit;                                            // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerChordAction
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UInputTriggerChordAction : public UInputTrigger
	{
	public:
		class UInputAction*                                        ChordAction;                                             // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerChordBlocker
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UInputTriggerChordBlocker : public UInputTriggerChordAction
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
