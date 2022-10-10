#pragma once
#include "Triunghi.h"
#include <string>
#include<iostream>
using namespace std;
class FunctiiTrigonometrice:public Triunghi
{ 
public:
	void calcul_sinus() override;
	void calcul_cosinus() override;
	void calcul_tangenta() override;
	void calcul_cotangenta() override;

	FunctiiTrigonometrice(double c1, double c2, double i);
	double getc1();
	double getc2();
	double geti();
};

