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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum T_Type_Invitation.T_Type_Invitation
	 */
	enum class ET_Type_Invitation : uint8_t
	{
		T_Type_InvitationTeamApplication      = 0,
		T_Type_InvitationTeamInvitation       = 1,
		T_Type_InvitationHomeInvitation       = 2,
		T_Type_InvitationCreateRoomInvitation = 3,
		T_Type_InvitationSkydivingInvitation  = 4,
		T_Type_InvitationSkydivingTransfer    = 5,
		T_Type_InvitationTTypeMAX             = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
