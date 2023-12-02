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
	 * BlueprintGeneratedClass Lobby_Script.Lobby_Script_C
	 * Size -> 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
	 */
	class ALobby_Script_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              Loc_Hall;                                                // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Loc_BattlePass;                                          // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Loc_RankRace;                                            // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Loc_RankList;                                            // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Loc_Shop;                                                // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Loc_Weapon;                                              // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Loc_MVP;                                                 // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Loc_Character;                                           // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      LocatorList;                                             // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash

	public:
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveBeginPlayCopy();
		class FString GetModuleName();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Lobby_Script(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
