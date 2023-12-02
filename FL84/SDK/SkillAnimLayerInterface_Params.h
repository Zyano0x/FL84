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
	 * Function SkillAnimLayerInterface.SkillAnimLayerInterface_C.SkillAnimationLayer
	 */
	struct USkillAnimLayerInterface_C_SkillAnimationLayer_Params
	{
	public:
		struct FPoseLink                                           bpp__BasePose__pf;                                       // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FPoseLink                                           bpp__SkillAnimationLayer__pf;                            // 0x0010(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
