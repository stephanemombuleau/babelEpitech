#pragma once

#include <map>
#include "../headers-shared/shared/Exception.h"
#include "../headers-shared/shared/Mutex.h"

class MutexPool
{
private:
	std::map<std::string, Mutex *>	_mutex;
public:
	MutexPool();
	virtual ~MutexPool();
	bool	init(const std::string &);
	bool	destroy(const std::string &);
	bool	lock(const std::string &);
	bool	unLock(const std::string &);
	bool	tryLock(const std::string &);
	Mutex	&getMutex(const std::string &name);
};

