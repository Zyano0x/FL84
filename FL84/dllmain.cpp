#include "pch.h"

BOOL APIENTRY DllMain(_In_ HINSTANCE hInstance,
					  _In_ DWORD  ul_reason_for_call,
					  _In_ LPVOID lpReserved
)
{
	DisableThreadLibraryCalls(hInstance);

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Initialize, 0, 0, 0));
		return TRUE;

	case DLL_PROCESS_DETACH:
		CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Deallocate, 0, 0, 0));
		return TRUE;
	}
	return FALSE;
}

