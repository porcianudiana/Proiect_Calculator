#pragma once
#include <string>
using namespace std;
class TermenEcuatie
{
private:
	double t1;
	char* semn_numar;


public:
	TermenEcuatie();

	TermenEcuatie(const char* semn_numar, double t1);
	TermenEcuatie(const TermenEcuatie& t);

	~TermenEcuatie();

	TermenEcuatie operator=(const TermenEcuatie& t);
	double getTermen();

	char* getSemnNumar();
	void setSemnNumar(const char* semn_numar);
	void setTermen(double termen);

	friend ostream& operator<<(ostream&, TermenEcuatie);
	friend istream& operator>>(istream&, TermenEcuatie&);
};

