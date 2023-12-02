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
	 * Function SolarFunctionLibrary.SolarFunctionLibrary_C.FormatMinuteTime
	 */
	struct USolarFunctionLibrary_C_FormatMinuteTime_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_COB6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FTime;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarFunctionLibrary.SolarFunctionLibrary_C.IsMobilePlatform
	 */
	struct USolarFunctionLibrary_C_IsMobilePlatform_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsMobilePlatform;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SolarFunctionLibrary.SolarFunctionLibrary_C.IsPCPlatform
	 */
	struct USolarFunctionLibrary_C_IsPCPlatform_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPCPlatform;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetLocalNowTotalSeconds
	 */
	struct USolarFunctionLibrary_C_GetLocalNowTotalSeconds_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalSeconds;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SSBC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetUtcNowTotalSeconds
	 */
	struct USolarFunctionLibrary_C_GetUtcNowTotalSeconds_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalSeconds;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JCYT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetLocalNowTotalMilliseconds
	 */
	struct USolarFunctionLibrary_C_GetLocalNowTotalMilliseconds_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalMilliseconds;                                       // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R150[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetUtcNowTotalMilliseconds
	 */
	struct USolarFunctionLibrary_C_GetUtcNowTotalMilliseconds_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalMilliseconds;                                       // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ORDS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SolarFunctionLibrary.SolarFunctionLibrary_C.DoNothing
	 */
	struct USolarFunctionLibrary_C_DoNothing_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarFunctionLibrary.SolarFunctionLibrary_C.SolarFunctionLibraryTest
	 */
	struct USolarFunctionLibrary_C_SolarFunctionLibraryTest_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
