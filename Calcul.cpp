#include "Calcul.h"
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;


string Calcul::nume = "Calculator";

Calcul::Calcul()
{
	this->numar = 0;
}

Calcul::Calcul(double numar)
{
	this->numar = numar;
}

Calcul::~Calcul()
{
	this->numar = 0.0;
}

void Calcul::setNumar(double numar)
{
	this->numar = numar;
}

double Calcul::getNumar()
{
	return this->numar;
}

string Calcul::getNume()
{
	return nume;
}

void Calcul::setTNume(string nume)
{
	Calcul::nume = nume;
}

Calcul Calcul::operator+(double x)
{
	Calcul copie = *this;
	copie.numar = copie.numar + x;
	return copie;
}

Calcul Calcul::operator-(double x)
{
	Calcul copie = *this;
	copie.numar = copie.numar - x;
	return copie;
}

Calcul Calcul::operator*(double x)
{
	Calcul copie = *this;
	copie.numar = copie.numar * x;
	return copie;
}

Calcul Calcul::operator/(double x)
{
	Calcul copie = *this;
	copie.numar = copie.numar / x;
	if (x == 0)
	{
		cout << "Impartirea la 0 nu are sens" << endl;
		return 0;
		
	}
	else
	{
		return copie;
	}
}



Calcul Calcul::operator^(Calcul& x)
{
	Calcul y;
	int putere =  int(x.getNumar());
	double numarRezultat = this->getNumar();
	double numar = numarRezultat;
	while (putere != 0) {
		numarRezultat *= numar;
		putere--;
	}
	y.setNumar(numarRezultat);
	return y;
}

Calcul Calcul::operator&(Calcul & x)
{
	Calcul y;
	y.setNumar(sqrt(x.getNumar()));
	return y;
	
}

bool Calcul::operator!()
{
	bool ok = this->numar > 0 ? true : false;
	return ok;
}

Calcul::operator double()
{
	return numar * numar;
}

Calcul Calcul::operator+(Calcul c)
{
	
		Calcul copie = *this;
		copie.numar = numar + c.numar;
		return copie;
	
}

Calcul Calcul::operator-(Calcul c)
{
	Calcul copie = *this;
	copie.numar = numar - c.numar;
	return copie; 

}

Calcul Calcul::operator*(Calcul c)
{
	Calcul copie = *this;
	copie.numar = numar * c.numar;
	return copie;
}

Calcul Calcul::operator/(Calcul c)
{
	Calcul copie = *this;
	copie.numar = numar / c.numar;
	return copie;
}

void Calcul::serializare()
{
		ofstream f("calcul.bin", ios::binary);

		f.write((char*)&numar, sizeof(numar));
		f.close();

}

void Calcul::deserializare()
{
	ifstream f("calcul.bin", ios::binary);
	f.read((char*)&numar, sizeof(numar));

	f.close();
}


ostream& operator<<(ostream&out, Calcul c)
{
	out << "Numar: " << c.numar<< endl;
	return out;
}

istream& operator>>(istream& in, Calcul& c)
{
	cout << "Introduceti numarul pentru care doriti sa efectuati calculul: " << endl;
	in >> c.numar;
	return in;
}

Calcul operator++(Calcul& c)
{
	c.numar++;
	return c;
}
