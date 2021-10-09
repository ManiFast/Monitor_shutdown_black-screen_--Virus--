#include <iostream>
#include <Windows.h>
//#include <stdafx.h>

using namespace std;

int main()
{
	Beep(400, 1000);
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
	Sleep(1000);
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);
	Beep(400, 300);

	return 0;
}