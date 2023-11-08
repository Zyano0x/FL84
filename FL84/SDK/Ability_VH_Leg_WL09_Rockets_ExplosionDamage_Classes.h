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
	 * BlueprintGeneratedClass Ability_VH_Leg_WL09_Rockets_ExplosionDamage.Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C
	 * Size -> 0x0011 (FullSize[0x0319] - InheritedSize[0x0308])
	 */
	class AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C : public ASolarAbility
	{
	public:
		unsigned char                                              UnknownData_A4CX[0x8];                                   // 0x0308(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       HasExploded;                                             // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_Ability_VH_Leg_WL09_Rockets_ExplosionDamage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
