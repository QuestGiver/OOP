#pragma once

#include<string>

class person
{
	std::string soc;


public:

	person();

	person(std::string n, int a, std::string s);

	std::string name;

	int age;

	void Print();

	bool checkSoc(std::string test);


};
