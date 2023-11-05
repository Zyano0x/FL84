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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function RichtapTools.RichtapController.SetRichtapEnable
	 */
	struct URichtapController_SetRichtapEnable_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RichtapTools.RichtapController.SetEnableWinRichtap
	 */
	struct URichtapController_SetEnableWinRichtap_Params
	{
	public:
		bool                                                       bIsEnableWinRichtap;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RichtapTools.RichtapController.SetEnableRichtap
	 */
	struct URichtapController_SetEnableRichtap_Params
	{
	public:
		bool                                                       bIsEnableRichtap;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
