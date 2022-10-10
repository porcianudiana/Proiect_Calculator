#pragma once
#include <string>
#include<iostream>
#include "BaterieCalculator.h"
using namespace std;
class Calculator:public BaterieCalculator
{
public:
	void incarca(int nivel);

};

