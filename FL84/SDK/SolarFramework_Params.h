#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * Function SolarFramework.SolarContainer.ReceiveInitialize
	 */
	struct USolarContainer_ReceiveInitialize_Params
	{	};

	/**
	 * Function SolarFramework.SolarContainer.ReceiveDeinitialize
	 */
	struct USolarContainer_ReceiveDeinitialize_Params
	{	};

	/**
	 * Function SolarFramework.SolarArchitecture.OnScopeChanged
	 */
	struct USolarArchitecture_OnScopeChanged_Params
	{
	public:
		EScope                                                     InLastScope;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScope                                                     InCurScope;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarFramework.SolarArchitecture.IsScopeSettlement
	 */
	struct USolarArchitecture_IsScopeSettlement_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarFramework.SolarArchitecture.IsScopeLogin
	 */
	struct USolarArchitecture_IsScopeLogin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarFramework.SolarArchitecture.IsScopeLobby
	 */
	struct USolarArchitecture_IsScopeLobby_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarFramework.SolarArchitecture.IsScopeBattle
	 */
	struct USolarArchitecture_IsScopeBattle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarFramework.SolarArchitecture.IsInScope
	 */
	struct USolarArchitecture_IsInScope_Params
	{
	public:
		EScope                                                     InScopeMask;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarFramework.SolarArchitecture.GetModel
	 */
	struct USolarArchitecture_GetModel_Params
	{
	public:
		class UClass*                                              ModelClass;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USolarAbstractModel*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarFramework.SolarArchitecture.GetManager
	 */
	struct USolarArchitecture_GetManager_Params
	{
	public:
		class UClass*                                              ManagerClass;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USolarAbstractManager*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarFramework.SolarArchitecture.GetCurScope
	 */
	struct USolarArchitecture_GetCurScope_Params
	{
	public:
		EScope                                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
