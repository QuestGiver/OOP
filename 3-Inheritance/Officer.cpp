#include "Officer.h"
#include <iostream>

void Officer::greet()
{
	person::greet();
	std::cout << "Hi, mah name's " << fullName << ".\n";
	std::cout << "Officer Numbah #" << bageNumber << ".\n";
}

Officer::Officer()
{
	fullName = "";
	happiness = 50;
	bageNumber = 0;
}

Officer::Officer(std::string initialName, int initialHappiness, int initialBageNumber)
{
	fullName = initialName;
	happiness = initialHappiness;
	bageNumber = initialBageNumber;
}
