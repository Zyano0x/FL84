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
	 * BlueprintGeneratedClass BPC_AirlineCruise.BPC_AirlineCruise_C
	 * Size -> 0x012C (FullSize[0x0274] - InheritedSize[0x0148])
	 */
	class UBPC_AirlineCruise_C : public UAirlineCruiseComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0148(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    AirlineID;                                               // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W9DQ[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ASolarPlayerState*, struct FVector>             EjectLocation;                                           // 0x0158(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TMap<class ASolarPlayerState*, struct FVector>             LandLocation;                                            // 0x01A8(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ASolarPlayerState*>                           ForceJumpPlayerList;                                     // 0x01F8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class ASolarCharacter*>                             CruisePlayers;                                           // 0x0208(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		struct FAirlineData                                        AirlineData;                                             // 0x0218(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      Height;                                                  // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ClearAllItems;                                           // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseSpecificAirlineData;                                 // 0x0249(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J3MH[0x2];                                   // 0x024A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAirlineData                                        SpecificAirlineData;                                     // 0x024C(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		bool GetPlayerForceJumped(class ASolarPlayerState* TargetPlayer);
		void GetPlayerLandLocation(class ASolarPlayerState* TargetPlayer, struct FVector* Location, bool* Succeed);
		void GetPlayerEjectLocation(class ASolarPlayerState* TargetPlayer, struct FVector* Location, bool* Succeed);
		void GetAirlineData_RealWorld(const struct FAirlineData& AirlineData, struct FVector2D* LineStart, struct FVector2D* LineEnd, struct FVector2D* JumpStart, struct FVector2D* JumpEnd, float* Speed, float* Hight);
		void MiniMap2RealWorld(const struct FVector2D& JumpStart, const struct FVector2D& JumpEnd, const struct FVector2D& LineStart, const struct FVector2D& LineEnd, struct FVector2D* JumpStartR, struct FVector2D* JumpEndR, struct FVector2D* LineStartR, struct FVector2D* LineEndR);
		void StartParachutingWithRandomAirline(TArray<class ASolarCharacter*>* TargetCharacters, int32_t* AirLineID);
		void StartParachuting(TArray<class ASolarCharacter*> TargetCharacters, bool ClearAllItems, int32_t AirlineID, const struct FAirlineData& AirlineData);
		void OnPlayerEjectingStateChanged(E_CharacterEjectState State, class ASolarCharacter* TargetCharacter);
		void SetSpecificAirlineData(const struct FAirlineData& AirlineData);
		void ExecuteUbergraph_BPC_AirlineCruise(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
