#include "Person.h"
#include <iostream>

person::person()
{
	fullName = "";
	int happiness = 50;
}

person::person(std::string initialName, int initialHappiness)
{
	fullName = initialName;
	happiness = initialHappiness;
}

void person::greet()
{
	std::cout << "Howdy! My name is " << fullName << ".\n";
}

bool person::isHappy()
{
	return happiness > 70;
}

