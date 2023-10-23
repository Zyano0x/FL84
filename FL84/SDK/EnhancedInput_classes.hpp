#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.EnhancedInputActionDelegateBinding
class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnhancedInputActionDelegateBinding* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.EnhancedInputActionValueBinding
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings;                          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnhancedInputActionValueBinding* GetDefaultObj();

};

// 0x30 (0x168 - 0x138)
// Class EnhancedInput.EnhancedInputComponent
class UEnhancedInputComponent : public UInputComponent
{
public:
	uint8                                        Pad_7E4[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnhancedInputComponent* GetDefaultObj();

	struct FInputActionValue GetBoundActionValue(class UInputAction* Action);
};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.EnhancedInputLibrary
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEnhancedInputLibrary* GetDefaultObj();

	void RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately);
	struct FInputActionValue MakeInputActionValue(float X, float Y, float Z, struct FInputActionValue& MatchValueType);
	struct FInputActionValue GetBoundActionValue(class AActor* Actor, class UInputAction* Action);
	bool Conv_InputActionValueToBool(const struct FInputActionValue& InValue);
	struct FVector Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue);
	struct FVector2D Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue);
	float Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue);
	void BreakInputActionValue(const struct FInputActionValue& InActionValue, float* X, float* Y, float* Z);
};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.EnhancedInputSubsystemInterface
class IEnhancedInputSubsystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEnhancedInputSubsystemInterface* GetDefaultObj();

	void RequestRebuildControlMappings(bool bForceImmediately);
	void RemoveMappingContext(class UInputMappingContext* MappingContext);
	enum class EMappingQueryResult QueryMapKeyInContextSet(TArray<class UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues);
	enum class EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues);
	TArray<struct FKey> QueryKeysMappedToAction(class UInputAction* Action);
	bool HasMappingContext(class UInputMappingContext* MappingContext);
	void ClearAllMappings();
	void AddMappingContext(class UInputMappingContext* MappingContext, int32 Priority);
};

// 0xB0 (0xE0 - 0x30)
// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_7F9[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnhancedInputLocalPlayerSubsystem* GetDefaultObj();

};

// 0xB8 (0xE8 - 0x30)
// Class EnhancedInput.EnhancedInputEngineSubsystem
class UEnhancedInputEngineSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_7FA[0xB0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnhancedInputEngineSubsystem* GetDefaultObj();

};

// 0x258 (0x600 - 0x3A8)
// Class EnhancedInput.EnhancedPlayerInput
class UEnhancedPlayerInput : public UPlayerInput
{
public:
	TMap<class UInputMappingContext*, int32>     AppliedInputContexts;                              // 0x3A8(0x50)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FEnhancedActionKeyMapping>     EnhancedActionMappings;                            // 0x3F8(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7FC[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UInputAction*, struct FInputActionInstance> ActionInstanceData;                                // 0x458(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7FD[0x158];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnhancedPlayerInput* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class EnhancedInput.InputAction
class UInputAction : public UDataAsset
{
public:
	bool                                         bConsumeInput;                                     // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriggerWhenPaused;                                // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReserveAllMappings;                               // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionValueType             ValueType;                                         // 0x33(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputAction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputDebugKeyDelegateBinding
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;                     // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputDebugKeyDelegateBinding* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class EnhancedInput.InputMappingContext
class UInputMappingContext : public UDataAsset
{
public:
	TArray<struct FEnhancedActionKeyMapping>     Mappings;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ContextDescription;                                // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputMappingContext* GetDefaultObj();

	void UnmapKey(class UInputAction* Action, const struct FKey& Key);
	void UnmapAll();
	void UnmapAction(class UInputAction* Action);
	struct FEnhancedActionKeyMapping MapKey(class UInputAction* Action, const struct FKey& ToKey);
};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifier
class UInputModifier : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInputModifier* GetDefaultObj();

	struct FInputActionValue ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime);
	struct FLinearColor GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue);
	enum class EModifierExecutionPhase GetExecutionPhase();
};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputModifierDeadZone
class UInputModifierDeadZone : public UInputModifier
{
public:
	float                                        LowerThreshold;                                    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpperThreshold;                                    // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDeadZoneType                     Type;                                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_811[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierDeadZone* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputModifierScalar
class UInputModifierScalar : public UInputModifier
{
public:
	struct FVector                               Scalar;                                            // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_812[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierScalar* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierNegate
class UInputModifierNegate : public UInputModifier
{
public:
	bool                                         bX;                                                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bY;                                                // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bZ;                                                // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_813[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierNegate* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class EnhancedInput.InputModifierSmooth
class UInputModifierSmooth : public UInputModifier
{
public:
	uint8                                        Pad_814[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierSmooth* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveExponential
class UInputModifierResponseCurveExponential : public UInputModifier
{
public:
	struct FVector                               CurveExponent;                                     // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_815[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveExponential* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveUser
class UInputModifierResponseCurveUser : public UInputModifier
{
public:
	class UCurveFloat*                           ResponseX;                                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ResponseY;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ResponseZ;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveUser* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierFOVScaling
class UInputModifierFOVScaling : public UInputModifier
{
public:
	float                                        FOVScale;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFOVScalingType                   FOVScalingType;                                    // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_816[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierFOVScaling* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifierToWorldSpace
class UInputModifierToWorldSpace : public UInputModifier
{
public:

	static class UClass* StaticClass();
	static class UInputModifierToWorldSpace* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierSwizzleAxis
class UInputModifierSwizzleAxis : public UInputModifier
{
public:
	enum class EInputAxisSwizzle                 Order;                                             // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_817[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierSwizzleAxis* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierCollection
class UInputModifierCollection : public UInputModifier
{
public:
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPermitValueTypeModification;                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_818[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierCollection* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputTrigger
class UInputTrigger : public UObject
{
public:
	float                                        ActuationThreshold;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionValue                     LastValue;                                         // 0x2C(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_81B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputTrigger* GetDefaultObj();

	enum class ETriggerState UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime);
	bool IsActuated(struct FInputActionValue& ForValue);
	enum class ETriggerTypeEx GetTriggerType();
};

// 0x8 (0x48 - 0x40)
// Class EnhancedInput.InputTriggerTimedBase
class UInputTriggerTimedBase : public UInputTrigger
{
public:
	float                                        HeldDuration;                                      // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAffectedByTimeDilation;                           // 0x44(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputTriggerTimedBase* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class EnhancedInput.InputTriggerDown
class UInputTriggerDown : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerDown* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class EnhancedInput.InputTriggerPressed
class UInputTriggerPressed : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerPressed* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class EnhancedInput.InputTriggerReleased
class UInputTriggerReleased : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerReleased* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class EnhancedInput.InputTriggerHold
class UInputTriggerHold : public UInputTriggerTimedBase
{
public:
	uint8                                        Pad_81D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoldTimeThreshold;                                 // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOneShot;                                        // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputTriggerHold* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class EnhancedInput.InputTriggerHoldAndRelease
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{
public:
	float                                        HoldTimeThreshold;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputTriggerHoldAndRelease* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class EnhancedInput.InputTriggerTap
class UInputTriggerTap : public UInputTriggerTimedBase
{
public:
	float                                        TapReleaseTimeThreshold;                           // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_820[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputTriggerTap* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class EnhancedInput.InputTriggerPulse
class UInputTriggerPulse : public UInputTriggerTimedBase
{
public:
	uint8                                        Pad_821[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bTriggerOnStart;                                   // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_822[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Interval;                                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriggerLimit;                                      // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputTriggerPulse* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class EnhancedInput.InputTriggerChordAction
class UInputTriggerChordAction : public UInputTrigger
{
public:
	class UInputAction*                          ChordAction;                                       // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputTriggerChordAction* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class EnhancedInput.InputTriggerChordBlocker
class UInputTriggerChordBlocker : public UInputTriggerChordAction
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerChordBlocker* GetDefaultObj();

};

}


