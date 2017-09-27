#pragma once
#include <string>

class person
{
protected:
	std::string fullName;
	
	int happiness;

public:
	person();

	person(std::string initialName, int initialHappiness);

	//Prinbts a greeting to the consol
	virtual void greet();

	//Returns true is happy and false if otherwise

	bool isHappy();
};