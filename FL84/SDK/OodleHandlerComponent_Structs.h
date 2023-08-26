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
