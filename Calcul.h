#pragma once
#include <iostream>
#include <string>
using namespace std;
class Calcul
{
private:
	double numar;
	static string nume;
public:
	Calcul();
	Calcul(double numar);
	~Calcul();
	void setNumar(double numar);
	double getNumar();
	static string getNume();
	static void setTNume(string nume);
	Calcul operator+(double x);
	Calcul operator-(double x);
	Calcul operator*(double x);
	Calcul operator/(double x);

	Calcul operator^(Calcul& x);
	Calcul operator&(Calcul& x);

	bool operator!();

	explicit operator double();

	Calcul operator+(Calcul c);
	Calcul operator-(Calcul c);
	Calcul operator*(Calcul c);
	Calcul operator/(Calcul c);
	void serializare();
	void deserializare();

	friend ostream& operator<<(ostream&, Calcul);
	friend istream& operator>>(istream&, Calcul&);
	friend Calcul operator++(Calcul&);
	

};

