#include<iostream>
#include"Person.h"
#include"Television.h"
#include"PiggyBank.h"
#include"ServerInfo.h"
#include<random>
#include<time.h>
int main()
{
	//person human("Paul", 18, "22-222-222-2222");
	//human.Print();


	//person OtherPaul("OtherPaul",18, "33-333-333-3333");
	//OtherPaul.Print();

	//if (human.checkSoc("22-222-222-2222"))
	//{
	//	std::cout << "MATCH\n";
	//}
	//else
	//{
	//	std::cout << "NO MATCH\n";
	//}
	//Television tele(10, 10);
	//std::cout << "Tele---------------\n";
	//tele.decreaseVolume();
	//tele.increaseChannel();
	//system("pause");
	//std::cout << "Tele---------------\n";

	//DigitalPiggyBank bank;
	//std::cout << "Piggy--------------\n";
	//bank.deposit(239);
	//std::cout << bank.balance() << std::endl;
	//bank.withdraw();
	//std::cout << bank.balance() << std::endl;
	//std::cout << "Piggy--------------\n";


	ServerInfo servers[5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		servers[i].serverName = "AwsomeTown";
		servers[i].region = "NA";
		servers[i].maxPlayerCount = 16;
		servers[i].currentPlayerCount = rand()% 1+ 100;
		servers[i].ping = i * 3;
		ServerBrowserService serverBrowserService;

		serverBrowserService.registerServer(servers[i]);
		ServerInfo arr[20];
		//serverBrowserService.getServers(*arr, 5);
		serverBrowserService.getServersPingLimit(arr, 5);
		serverBrowserService.getServersRegionSpecifir(arr, 5, "IN");
		serverBrowserService.getFullServers(arr, 5);
	}






	while (true)
	{

	}
}