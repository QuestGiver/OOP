#pragma once
#include "Person.h"
#include<string>

class Officer : public person
{
protected:
	int bageNumber;

public:
	virtual void greet() override;
	Officer();
	Officer(std::string initialName, int initialHappiness, int initialBageNumber);

};