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
	 * BlueprintGeneratedClass BP_ConfigSave.BP_ConfigSave_C
	 * Size -> 0x00E1 (FullSize[0x0109] - InheritedSize[0x0028])
	 */
	class UBP_ConfigSave_C : public USaveGame
	{
	public:
		bool                                                       bEnableAiTeammate;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bEnableCustomRoom;                                       // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8EMR[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomRoomData                                     CustomRoomConfig;                                        // 0x0030(0x00D8) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsCustomRoomHost;                                       // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
