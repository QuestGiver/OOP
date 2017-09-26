#pragma once
#include<string>
struct ServerInfo
{
	std::string serverName;
	std::string region;
	int currentPlayerCount;
	int maxPlayerCount;
	int ping;
};

class ServerBrowserService
{
private:
	// A const variable indicating the array capacity.
	// NOTE: We'll discuss how to make this dynamic in the future.
	const static int SERVERINFO_CAPACITY = 20;

	// An array of all servers registered with the system.
	ServerInfo * servers = new ServerInfo[SERVERINFO_CAPACITY];
	// A count of all servers currently registered.
	int serverCount;
public:
	ServerBrowserService();

	// Registers a server with the service
	bool registerServer(ServerInfo newServer);

	// Copies server entries into the given array.
	// Returns the total number of servers meeting the filter settings.
	int getServers(ServerInfo * dstArray, size_t dstSize);
	int getServersPingLimit(ServerInfo * dstArray, size_t dstSize);
	int getServersRegionSpecifir(ServerInfo * dstArray, size_t dstSize, std::string region);
	int getEmptyServers(ServerInfo * dstArray, size_t dstSize);
	int getFullServers(ServerInfo * dstArray, size_t dstSize);
	void clearMem();
};