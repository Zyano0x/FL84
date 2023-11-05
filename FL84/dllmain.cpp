#include "pch.h"

static uintptr_t __cdecl I_beginthreadex(
	void* _Security,
	unsigned                 _StackSize,
	_beginthreadex_proc_type _StartAddress,
	void* _ArgList,
	unsigned                 _InitFlag,
	unsigned* _ThrdAddr)
{
	return LI_FN(_beginthreadex).get()(_Security, _StackSize, _StartAddress, _ArgList, _InitFlag, _ThrdAddr);
}

BOOL APIENTRY DllMain(_In_ HINSTANCE hInstance,
					  _In_ DWORD  ul_reason_for_call,
					  _In_ LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hInstance);

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		I_beginthreadex(0, 0, (_beginthreadex_proc_type)Initialize, 0, 0, 0);
		return TRUE;

	case DLL_PROCESS_DETACH:
		I_beginthreadex(0, 0, (_beginthreadex_proc_type)Deallocate, 0, 0, 0);
		return TRUE;
	}
	return FALSE;
}

