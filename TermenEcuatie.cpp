#include "TermenEcuatie.h"
#include <iostream>
#include <string>
using namespace std;

TermenEcuatie::TermenEcuatie()
{
	t1 = 0.0;
	string s = "N/A";
	semn_numar = new char[strlen("N/A") + 1];
	strcpy_s(semn_numar, strlen("N/A") + 1, s.c_str());
}

TermenEcuatie::TermenEcuatie(const char* semn_numar, double t1)
{
	this->t1 = t1;
	if (semn_numar != nullptr) {
		this->semn_numar = new char[strlen(semn_numar) + 1];
		strcpy_s(this->semn_numar, strlen(semn_numar) + 1, semn_numar);
	}
	else {
		this->semn_numar = new char[strlen("N/A") + 1];
		strcpy_s(this->semn_numar, strlen("N/A") + 1, "N/A");
	}
}

TermenEcuatie::TermenEcuatie(const TermenEcuatie& t)
{
	t1 = t.t1;
	if (t.semn_numar != nullptr)
	{
		semn_numar = new char[strlen(t.semn_numar) + 1];
		strcpy_s(semn_numar, strlen(t.semn_numar) + 1, t.semn_numar);
	}
	else
	{
		semn_numar = nullptr;
	}
}

TermenEcuatie::~TermenEcuatie()
{
	if (semn_numar != nullptr) {
		delete[] semn_numar;

	}
	semn_numar = nullptr;
}

TermenEcuatie TermenEcuatie::operator=(const TermenEcuatie& t)
{
	if (this != &t)
	{

		if (semn_numar != nullptr)
		{
			delete[] semn_numar;
		}

		t1 = t.t1;
		if (t.semn_numar != nullptr)
		{
			semn_numar = new char[strlen(t.semn_numar) + 1];
			strcpy_s(semn_numar, strlen(t.semn_numar) + 1, t.semn_numar);
		}
	}
	return *this;
}

double TermenEcuatie::getTermen()
{
	return this->t1;
}

char* TermenEcuatie::getSemnNumar()
{
	if (this->semn_numar)
	{
		char* copie = new char[strlen(semn_numar) + 1];
		strcpy_s(copie, strlen(semn_numar) + 1, semn_numar);
		return copie;
	}
	else return nullptr;
}

void TermenEcuatie::setSemnNumar(const char* semn_numar)
{

	if (semn_numar != nullptr)
	{
		if (this->semn_numar != nullptr)
		{
			delete[] this->semn_numar;
		}
		this->semn_numar = new char[strlen(semn_numar) + 1];
		strcpy_s(this->semn_numar, strlen(semn_numar) + 1, semn_numar);
	}
}

void TermenEcuatie::setTermen(double termen)
{
	t1 = termen;
}

ostream& operator<<(ostream& out, TermenEcuatie te)
{
	out << "Termen: " << te.t1 << endl;
	out << "Semnul numarului: " << te.semn_numar << endl;
	if (te.semn_numar == "negativ")
	{
		cout << "-" << te.t1 << endl;
	}
	else
		if (te.semn_numar == "pozitiv")
		{
			cout << "+" << te.t1 << endl;
		}


	return out;
}

istream& operator>>(istream& in, TermenEcuatie& te)
{
	cout << "Termen: " << endl;
	in >> te.t1;
	string buffer;
	cout << "Semn numar: " << endl;
	in >> buffer;
	te.setSemnNumar(buffer.c_str());
	if (buffer == "negativ")
	{
		cout << "-" << te.t1 << endl;
	}
	else
		if (buffer == "pozitiv")
		{
			cout << "+" << te.t1 << endl;
		}

	return in;
}
