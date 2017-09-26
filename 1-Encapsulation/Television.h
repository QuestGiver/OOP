#pragma once

#include<string>

class Television
{
private:
	int currentChannel;
	int currentVolume;
public:
	Television(int chn, int Tevol);

	void increaseVolume();
	void decreaseVolume();

	void increaseChannel();
	void decreaseChannel();
};