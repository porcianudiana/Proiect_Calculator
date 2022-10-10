#pragma once
#include <string>
using namespace std;
class Verificare
{
private:
	string ecuatie;
	bool ok = 0;
	bool verificareParanteze();
	
public:
	Verificare();
	Verificare(string ecuatie);
	~Verificare();
	void setEcuatie(string ecuatie);
	string getEcuatie();
	bool verificare();
	void spatiiLibere();
	bool verificareOperatii();
	bool verificareCaractere();
	friend ostream& operator<<(ostream&, Verificare);
	friend istream& operator>>(istream&, Verificare&);

};

