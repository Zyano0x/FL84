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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class UnLua.UnLuaInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUnLuaInterface : public UInterface
	{
	public:
		class FString GetModuleName();
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.UnLuaManager
	 * Size -> 0x0590 (FullSize[0x05B8] - InheritedSize[0x0028])
	 */
	class UUnLuaManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_FH81[0x590];                                 // 0x0028(0x0590) MISSED OFFSET (PADDING)

	public:
		void TriggerAnimNotify();
		void OnLatentActionCompleted(int32_t LinkID);
		void OnActorDestroyed(class AActor* Actor);
		void InputVectorAxis(const struct FVector& AxisValue);
		void InputTouch(ETouchIndex FingerIndex, const struct FVector& Location);
		void InputGesture(float Value);
		void InputAxis(float AxisValue);
		void InputAction(const struct FKey& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.UnLuaPerformanceTestProxy
	 * Size -> 0x0060 (FullSize[0x0288] - InheritedSize[0x0228])
	 */
	class AUnLuaPerformanceTestProxy : public AActor
	{
	public:
		unsigned char                                              UnknownData_RA3Y[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MeshID;                                                  // 0x0230(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_24O8[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MeshName;                                                // 0x0238(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             COM;                                                     // 0x0248(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0RPD[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Indices;                                                 // 0x0258(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     Positions;                                               // 0x0268(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     PredictedPositions;                                      // 0x0278(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UpdatePositions(TArray<struct FVector> NewPositions);
		class FString UpdateMeshName(const class FString& NewName);
		int32_t UpdateMeshID(int32_t NewID);
		void UpdateIndices(TArray<int32_t> NewIndices);
		void Simulate(float DeltaTime);
		bool Raycast(const struct FVector& Origin, const struct FVector& Direction);
		void NOP();
		TArray<struct FVector> GetPredictedPositions();
		void GetPositions(TArray<struct FVector>* OutPositions);
		class FString GetMeshName();
		bool GetMeshInfo(int32_t* OutMeshID, class FString* OutMeshName, struct FVector* OutCOM, TArray<int32_t>* OutIndices, TArray<struct FVector>* OutPositions, TArray<struct FVector>* OutPredictedPositions);
		int32_t GetMeshID();
		void GetIndices(TArray<int32_t>* OutIndices);
		struct FVector GetCOM();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
