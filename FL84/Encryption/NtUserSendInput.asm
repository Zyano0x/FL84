.code

_NtUserSendInput PROC

	mov r10, rcx
	mov eax, 3735928559
	SysCall
	ret

_NtUserSendInput ENDP

END