#include <windows.h>
#include <stdio.h>

int main() {
    STARTUPINFOA si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    char cmd[] = "notepad.exe";

    printf("Parent process (PID: %lu) - creating child...\n",
           GetCurrentProcessId());

    if (!CreateProcessA(
            NULL,
            cmd,
            NULL,
            NULL,
            FALSE,
            0,
            NULL,
            NULL,
            &si,
            &pi))
    {
        printf("CreateProcess failed (error %lu).\n", GetLastError());
        return 1;
    }

    printf("Child process created!\n");
    printf("Child PID: %lu\n", pi.dwProcessId);

    WaitForSingleObject(pi.hProcess, INFINITE);

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return 0;
}