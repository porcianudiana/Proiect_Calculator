#include "FunctiiTrigonometrice.h"
#include <string>
#include<iostream>
using namespace std;

void FunctiiTrigonometrice::calcul_sinus()
{
	cout << "Sinusul unghiului dintre c1 si i este: " << c2 / i << endl;
}

void FunctiiTrigonometrice::calcul_cosinus()
{
	cout << "Cosinusul unghiului dintre c1 si i este: " << c1 / i << endl;
}

void FunctiiTrigonometrice::calcul_tangenta()
{
	cout << "Tangenta unghiului dintre c1 si i este: " << c2 / c1 << endl;
}

void FunctiiTrigonometrice::calcul_cotangenta()
{
	cout << "Cotangenta unghiului dintre c1 si i este: " << c1 / c2 << endl;
}

FunctiiTrigonometrice::FunctiiTrigonometrice(double c1, double c2, double i):Triunghi()
{

}

double FunctiiTrigonometrice::getc1()
{
	return Triunghi::c1;

}

double FunctiiTrigonometrice::getc2()
{
	return Triunghi::c2;
}

double FunctiiTrigonometrice::geti()
{
	return Triunghi::i;
}
