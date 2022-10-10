#pragma once
#include <string>
#include<iostream>
using namespace std;
class BaterieCalculator
{
protected:
	int nivelBaterie;
public:
	BaterieCalculator();
	
	virtual void incarca(int nivel)=0;
};

