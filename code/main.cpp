#include <windows.h>
#include <iostream>
#include <Lmcons.h>

int main() {
    wchar_t username[UNLEN + 1];
    DWORD username_len = UNLEN + 1;
    GetUserNameW(username, &username_len);

    std::wcout << L"Hello, " << std::wstring(username) << std::endl;

    Sleep(1000);

    std::wcout << L"Made by sodareverse" << std::endl;

    return 0;
}
