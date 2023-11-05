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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SolarlandResUpdate.EDownloadTaskError
	 */
	enum class EDownloadTaskError : uint8_t
	{
		ConnectFailed          = 0,
		RequestHeadFailed      = 1,
		CreateFileFailed       = 2,
		DownloadFailed         = 3,
		WriteFailed            = 4,
		DeleteOldFailed        = 5,
		MoveFailed             = 6,
		CreateDownloadTaskFail = 7,
		GetPlatformFileFail    = 8,
		GetWrongJsonFormat     = 9,
		MAX                    = 10
	};

	/**
	 * Enum SolarlandResUpdate.ELoginAnnouncement
	 */
	enum class ELoginAnnouncement : uint8_t
	{
		ServerCloseAnnounce = 0,
		UpdateAnnounce      = 1,
		Unknown             = 2,
		MAX                 = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
