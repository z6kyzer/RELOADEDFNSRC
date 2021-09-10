#include "pch.h"

#include "util.h"
#include "curl.h"

VOID Main() {
    Util::InitConsole();

    printf("Welcome To ReloadedFN\n");
    Sleep(1000);
    printf("Made By 𝓚𝔂𝔃𝓮𝓻#1111.\n");
    Sleep(2000);
    printf("Credits to OnyxFN for DLL\n");
    Sleep(2000);
    printf("Launching...\n");

    InitCurl();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH)
        Main();

    return TRUE;
}
