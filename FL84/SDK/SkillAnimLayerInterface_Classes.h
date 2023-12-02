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
	 * DynamicClass SkillAnimLayerInterface.SkillAnimLayerInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USkillAnimLayerInterface_C : public UAnimLayerInterface
	{
	public:
		void SkillAnimationLayer(const struct FPoseLink& bpp__BasePose__pf, struct FPoseLink* bpp__SkillAnimationLayer__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
