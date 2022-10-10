#pragma once
#include <string>
#include<iostream>
using namespace std;
class Triunghi
{
protected:
	double c1;
	double c2;
	double i;
public:
	virtual void calcul_sinus();
	virtual void calcul_cosinus();
	virtual void calcul_tangenta();
	virtual void calcul_cotangenta();
	Triunghi();
	Triunghi(double c1, double c2, double i);
	double getc1();
	double getc2();
	double getI();
	friend ostream& operator<< (ostream& output, Triunghi tr);
};

