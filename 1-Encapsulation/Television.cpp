#include "Television.h"
#include<iostream>

Television::Television(int chn, int vol)//Initial Definition
{
	currentChannel = chn;
	currentVolume = vol;
}

void Television::increaseVolume()//+1 current vol
{
	currentVolume++;
	std::cout << currentVolume << std::endl;
}

void Television::decreaseVolume()//-1 current vol
{
	currentVolume--;
	std::cout << currentVolume << std::endl;
}

void Television::increaseChannel()//+1 current chan
{
	currentChannel++;
	std::cout << currentChannel << std::endl;
}

void Television::decreaseChannel()//-1 current chan
{
	currentChannel--;
	std::cout << currentChannel << std::endl;
}
