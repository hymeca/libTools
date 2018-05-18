#include "Lock.h"

void libTools::CMutexLock::Lock()
{
	_Lock.lock();
}

void libTools::CMutexLock::UnLock()
{
	_Lock.unlock();
}

libTools::CThreadLock::CThreadLock()
{
	::InitializeCriticalSection(&_Lock);
}

libTools::CThreadLock::~CThreadLock()
{
	::DeleteCriticalSection(&_Lock);
}

void libTools::CThreadLock::Lock()
{
	::EnterCriticalSection(&_Lock);
}

void libTools::CThreadLock::UnLock()
{
	::LeaveCriticalSection(&_Lock);
}
