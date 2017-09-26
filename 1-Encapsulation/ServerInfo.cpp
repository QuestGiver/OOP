#include "ServerInfo.h"

ServerBrowserService::ServerBrowserService()
{
	serverCount = 0;
}

bool ServerBrowserService::registerServer(ServerInfo newServer)
{
	//find the idex to put the server
	if (serverCount < SERVERINFO_CAPACITY)
	{
		servers[serverCount] = newServer;
		serverCount++;
		return true;
	}
	else
	{
		return false;
	}


	//add to server array

	//return true pr false if we successfully added a server]

	return false;
}

int ServerBrowserService::getServers(ServerInfo * dstArray, size_t dstSize)
{
	int size = 0;
	
	for (int i = 0; i < SERVERINFO_CAPACITY; i++)
	{
		dstArray[i] = servers[i];
		size++;
	}
	bool loop = false;
	while (loop == false)
	{
		int checker = 0;
		for (int i = 0; i < dstSize-1; i++)
		{
			if (dstArray[i].currentPlayerCount <= dstArray[i + 1].maxPlayerCount)
			{
				checker++;
			}
			else
			{
				int dummy = dstArray[i+1].currentPlayerCount;
				dstArray[i+1].currentPlayerCount = dstArray[i].currentPlayerCount;
				dstArray[i].currentPlayerCount = dummy;
			}
		}
		if (checker == dstSize -1)
		{
			loop = true;
		}
	}





	//the size of the new array we copied
	return size;
}

int ServerBrowserService::getServersPingLimit(ServerInfo * dstArray, size_t dstSize)
{
	int size = 0;
	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].ping < 10)
		{
			dstArray[i] = servers[i];
			size++;
		}
	}
}

int ServerBrowserService::getServersRegionSpecifir(ServerInfo * dstArray, size_t dstSize, std::string region)
{
	int size = 0;
	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].region == region)
		{
			dstArray[size] = servers[i];
			size++;
		}
	}
}

int ServerBrowserService::getEmptyServers(ServerInfo * dstArray, size_t dstSize)
{
	int size;
	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].currentPlayerCount == 0)
		{
			dstArray[size] = servers[i];
			size++;
		}
	}
}

int ServerBrowserService::getFullServers(ServerInfo * dstArray, size_t dstSize)
{
	int size;
	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].currentPlayerCount == servers[i].maxPlayerCount)
		{
			dstArray[size] = servers[i];
			size++;
		}
	}
}


void ServerBrowserService::clearMem()
{
	delete[] servers;
}
