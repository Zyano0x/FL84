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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetPlayerForceJumped
	 */
	struct UBPC_AirlineCruise_C_GetPlayerForceJumped_Params
	{
	public:
		class ASolarPlayerState*                                   TargetPlayer;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetPlayerLandLocation
	 */
	struct UBPC_AirlineCruise_C_GetPlayerLandLocation_Params
	{
	public:
		class ASolarPlayerState*                                   TargetPlayer;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Succeed;                                                 // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2E30[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetPlayerEjectLocation
	 */
	struct UBPC_AirlineCruise_C_GetPlayerEjectLocation_Params
	{
	public:
		class ASolarPlayerState*                                   TargetPlayer;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Succeed;                                                 // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D3UY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_AirlineCruise.BPC_AirlineCruise_C.GetAirlineData_RealWorld
	 */
	struct UBPC_AirlineCruise_C_GetAirlineData_RealWorld_Params
	{
	public:
		struct FAirlineData                                        AirlineData;                                             // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FVector2D                                           LineStart;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           LineEnd;                                                 // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           JumpStart;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           JumpEnd;                                                 // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Speed;                                                   // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Hight;                                                   // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AirlineCruise.BPC_AirlineCruise_C.MiniMap2RealWorld
	 */
	struct UBPC_AirlineCruise_C_MiniMap2RealWorld_Params
	{
	public:
		struct FVector2D                                           JumpStart;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           JumpEnd;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           LineStart;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           LineEnd;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           JumpStartR;                                              // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           JumpEndR;                                                // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           LineStartR;                                              // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           LineEndR;                                                // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AirlineCruise.BPC_AirlineCruise_C.StartParachutingWithRandomAirline
	 */
	struct UBPC_AirlineCruise_C_StartParachutingWithRandomAirline_Params
	{
	public:
		TArray<class ASolarCharacter*>                             TargetCharacters;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		int32_t                                                    AirLineID;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AirlineCruise.BPC_AirlineCruise_C.StartParachuting
	 */
	struct UBPC_AirlineCruise_C_StartParachuting_Params
	{
	public:
		TArray<class ASolarCharacter*>                             TargetCharacters;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ClearAllItems;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AV4E[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AirlineID;                                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAirlineData                                        AirlineData;                                             // 0x0018(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPC_AirlineCruise.BPC_AirlineCruise_C.OnPlayerEjectingStateChanged
	 */
	struct UBPC_AirlineCruise_C_OnPlayerEjectingStateChanged_Params
	{
	public:
		E_CharacterEjectState                                      State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JDZ3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASolarCharacter*                                     TargetCharacter;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AirlineCruise.BPC_AirlineCruise_C.SetSpecificAirlineData
	 */
	struct UBPC_AirlineCruise_C_SetSpecificAirlineData_Params
	{
	public:
		struct FAirlineData                                        AirlineData;                                             // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPC_AirlineCruise.BPC_AirlineCruise_C.ExecuteUbergraph_BPC_AirlineCruise
	 */
	struct UBPC_AirlineCruise_C_ExecuteUbergraph_BPC_AirlineCruise_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
