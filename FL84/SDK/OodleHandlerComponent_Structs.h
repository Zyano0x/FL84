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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OodleHandlerComponent.EOodleEnableMode
	 */
	enum class EOodleEnableMode : uint8_t
	{
		AlwaysEnabled                = 0,
		WhenCompressedPacketReceived = 1,
		MAX                          = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
