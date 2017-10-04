//#include "..\3-Inheritance\Person.h"
#pragma once

#include<iostream>

#include "Person.h"




person::person()
{
	name = "";
	age = 0;
}




person::person(std::string n, int a, std::string s)
{
	name = n;
	age = a;
	soc = s;
}

void person::Print()
{
	std::cout << name << std::endl;
	std::cout << age << std::endl;
}

bool person::checkSoc(std::string test)
{
	return soc == test;
}
