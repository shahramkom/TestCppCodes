// ShDynamicLibApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ShDynamicLibrary.h>

int main()
{
	std::cout << "Lib-> IP from String To Dword:" << ipFromStringToDword("10.20.3.15") << std::endl;
	getchar();
	return 0;
}
