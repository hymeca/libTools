// libTools.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <vector>
#include <string>
#include <iostream>
#include <tlhelp32.h>
#include <sstream>
#include <iterator>
#include <include/CharacterLib/Character.h>
#include <include/SocketCommon/SocketBuffer.h>

#pragma comment(lib,"CharacterLib_Debug.lib")
#pragma comment(lib,"user32.lib")
#define _SELF L"asd"








int main()
{
	std::vector<std::wstring> Vec;
	libTools::CCharacter::SplitFormatText(L"test edi, edi", L"test *,", Vec);
    return 0;
}

