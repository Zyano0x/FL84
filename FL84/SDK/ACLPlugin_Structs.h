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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ACLPlugin.ACLCompressionLevel
	 */
	enum class EACLCompressionLevel : uint8_t
	{
		ACLCL_Lowest  = 0,
		ACLCL_Low     = 1,
		ACLCL_Medium  = 2,
		ACLCL_High    = 3,
		ACLCL_Highest = 4,
		ACLCL_MAX     = 5
	};

	/**
	 * Enum ACLPlugin.ACLVectorFormat
	 */
	enum class EACLVectorFormat : uint8_t
	{
		ACLVF_Vector3          = 0,
		ACLVF_Vector3_Variable = 1,
		ACLVF_Vector3_MAX      = 2
	};

	/**
	 * Enum ACLPlugin.ACLRotationFormat
	 */
	enum class EACLRotationFormat : uint8_t
	{
		ACLRF_Quat               = 0,
		ACLRF_QuatDropW          = 1,
		ACLRF_QuatDropW_Variable = 2,
		ACLRF_MAX                = 3
	};

	/**
	 * Enum ACLPlugin.ACLVisualFidelityChangeResult
	 */
	enum class EACLVisualFidelityChangeResult : uint8_t
	{
		ACLVisualFidelityChangeResultDispatched                        = 0,
		ACLVisualFidelityChangeResultCompleted                         = 1,
		ACLVisualFidelityChangeResultFailed                            = 2,
		ACLVisualFidelityChangeResultACLVisualFidelityChangeResult_MAX = 3
	};

	/**
	 * Enum ACLPlugin.ACLVisualFidelity
	 */
	enum class EACLVisualFidelity : uint8_t
	{
		ACLVisualFidelityHighest               = 0,
		ACLVisualFidelityMedium                = 1,
		ACLVisualFidelityLowest                = 2,
		ACLVisualFidelityACLVisualFidelity_MAX = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
