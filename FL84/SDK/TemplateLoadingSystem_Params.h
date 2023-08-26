#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * Function TemplateLoadingSystem.LoadingScreenSubsystem.StopLoadingScreen
	 */
	struct ULoadingScreenSubsystem_StopLoadingScreen_Params
	{	};

	/**
	 * Function TemplateLoadingSystem.LoadingScreenSubsystem.StartLoadingScreen
	 */
	struct ULoadingScreenSubsystem_StartLoadingScreen_Params
	{
	public:
		class UClass*                                              InWidgetClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULoadingWidgetBase*                                  ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateLoadingSystem.LoadingScreenSubsystem.Get
	 */
	struct ULoadingScreenSubsystem_Get_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULoadingScreenSubsystem*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateLoadingSystem.LoadingWidgetBase.LoadingStarted
	 */
	struct ULoadingWidgetBase_LoadingStarted_Params
	{	};

	/**
	 * Function TemplateLoadingSystem.LoadingWidgetBase.LoadingFinished
	 */
	struct ULoadingWidgetBase_LoadingFinished_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
