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
#include <include/SocketCommon/SocketBuffer.h>

#define _SELF L"asd"

struct BaseSocketBuffer
{
	virtual BaseSocketBuffer& operator << (libTools::CSocketBuffer& SocketBuffer) = NULL;
	virtual BaseSocketBuffer& operator >> (libTools::CSocketBuffer& SocketBuffer) = NULL;
};


struct GameIdentity
{
	std::wstring wsGameType;
	std::wstring wsGameName;

	bool operator == (CONST GameIdentity& RightParam) CONST
	{
		return this->wsGameType == RightParam.wsGameType && this->wsGameName == RightParam.wsGameName;
	}
};

struct CatchFishBinaryCode
{
	DWORD dwAddr;
	DWORD dwValue;
};

struct CatchFishStructContent : public BaseSocketBuffer
{
	GameIdentity						Identifier;
	std::wstring						wsFullPath;
	DWORD								dwFileCRC32;
	std::vector<std::wstring>			VecSupplementPath;
	std::vector<CatchFishBinaryCode>	VecCode;
	std::wstring						wsCopyDestPath;

	virtual CatchFishStructContent& operator << (libTools::CSocketBuffer& SocketBuffer)
	{
		SocketBuffer << Identifier.wsGameType << Identifier.wsGameName;
		SocketBuffer << wsFullPath;
		SocketBuffer << dwFileCRC32;
	}

	virtual CatchFishStructContent& operator >> (libTools::CSocketBuffer& SocketBuffer)
	{
		
	}
};








int main()
{
	
    return 0;
}

