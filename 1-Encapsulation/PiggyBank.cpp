#include "PiggyBank.h"

void DigitalPiggyBank::deposit(float net)
{
	currentBalance = net;
}

float DigitalPiggyBank::withdraw()
{
	return currentBalance = 0;
}

float DigitalPiggyBank::balance() const
{
	return currentBalance;
}
