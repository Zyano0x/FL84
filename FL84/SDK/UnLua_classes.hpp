#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class UnLua.UnLuaInterface
class IUnLuaInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUnLuaInterface* GetDefaultObj();

	class FString GetModuleName();
};

// 0x4F0 (0x518 - 0x28)
// Class UnLua.UnLuaManager
class UUnLuaManager : public UObject
{
public:
	uint8                                        Pad_9B1[0x4F0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUnLuaManager* GetDefaultObj();

	void TriggerAnimNotify();
	void OnLatentActionCompleted(int32 LinkID);
	void OnActorDestroyed(class AActor* Actor);
	void InputVectorAxis(struct FVector& AxisValue);
	void InputTouch(enum class ETouchIndex FingerIndex, struct FVector& Location);
	void InputGesture(float Value);
	void InputAxis(float AxisValue);
	void InputAction(const struct FKey& Key);
};

// 0x60 (0x288 - 0x228)
// Class UnLua.UnLuaPerformanceTestProxy
class AUnLuaPerformanceTestProxy : public AActor
{
public:
	uint8                                        Pad_9BE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MeshID;                                            // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9BF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MeshName;                                          // 0x238(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               COM;                                               // 0x248(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9C0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Indices;                                           // 0x258(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       Positions;                                         // 0x268(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       PredictedPositions;                                // 0x278(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AUnLuaPerformanceTestProxy* GetDefaultObj();

	void UpdatePositions(TArray<struct FVector>& NewPositions);
	class FString UpdateMeshName(const class FString& NewName);
	int32 UpdateMeshID(int32 NewID);
	void UpdateIndices(TArray<int32>& NewIndices);
	void Simulate(float DeltaTime);
	bool Raycast(struct FVector& Origin, struct FVector& Direction);
	void NOP();
	TArray<struct FVector> GetPredictedPositions();
	void GetPositions(TArray<struct FVector>* OutPositions);
	class FString GetMeshName();
	bool GetMeshInfo(int32* OutMeshID, class FString* OutMeshName, struct FVector* OutCOM, TArray<int32>* OutIndices, TArray<struct FVector>* OutPositions, TArray<struct FVector>* OutPredictedPositions);
	int32 GetMeshID();
	void GetIndices(TArray<int32>* OutIndices);
	struct FVector GetCOM();
};

}


