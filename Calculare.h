#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Calculare
{
private:
	const int id_oper;
	double x;
	double y;
	char operand;

public:
	Calculare();
	Calculare(int id_oper, char operand, double x, double y);
	
	~Calculare();
	
	bool operator<(Calculare c);
	bool operator>(Calculare c);
	bool operator<=(Calculare c);
	bool operator>=(Calculare c);
	bool operator==(Calculare c);
	double calcul(double x, char operand, double y);
	

	friend ostream& operator<<(ostream&, Calculare);
	friend istream& operator>>(istream&, Calculare&);


	friend ofstream& operator<<(ofstream& , Calculare );
	friend ifstream& operator>>(ifstream& , Calculare& );
};

