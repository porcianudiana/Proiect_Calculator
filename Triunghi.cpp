#include "Triunghi.h"
#include <string>
#include<iostream>
using namespace std;

void Triunghi::calcul_sinus()
{
	
	cout << "Sinusul unghiului dintre c1 si i este: " << c2 / i << endl;
	cout << "Sinusul unghiului dintre c2 si i este: " << c1 / i << endl;
}

void Triunghi::calcul_cosinus()
{
	cout << "Cosinusul unghiului dintre c1 si i este: " << c1 / i << endl;
	cout << "Cosinusul unghiului dintre c2 si i este: " << c2 / i << endl;
}

void Triunghi::calcul_tangenta()
{
	cout << "Tangenta unghiului dintre c1 si i este: " << c2 / c1 << endl;
	cout << "Tangenta unghiului dintre c2 si i este: " << c1 / c2 << endl;
}

void Triunghi::calcul_cotangenta()
{
	cout << "Cotangenta unghiului dintre c1 si i este: " << c1 / c2 << endl;
	cout << "Cotangenta unghiului dintre c2 si i este: " << c2 / c1 << endl;
}

Triunghi::Triunghi()
{
	c1 = 3;
	c2= 4; 
	i = 5;
}

Triunghi::Triunghi(double c1, double c2, double i)
{
	this->c1 = c1;
	this->c2 = c2;
	this->i = i;
}

double Triunghi::getc1()
{
	return c1;
}

double Triunghi::getc2()
{
	return c2;
}

double Triunghi::getI()
{
	return i;
}

ostream& operator<<(ostream& output, Triunghi tr)
{
	output << tr.getc1() << " " << tr.getc2() << " " << tr.getI() << endl;

	return output;
}
