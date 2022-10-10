#include "Verificare.h"
#include <iostream>
#include <string>
using namespace std;

Verificare::Verificare()
{
	this->ecuatie = "";
}

Verificare::Verificare(string ecuatie)
{
	this->ecuatie = ecuatie;
	this->spatiiLibere();
}

Verificare::~Verificare()
{
	
}

void Verificare::setEcuatie(string ecuatie)
{
	this->ecuatie = ecuatie;
	this->spatiiLibere();
}

string Verificare::getEcuatie()
{
	return this->ecuatie;
}

bool Verificare::verificare()
{
    if (this->ecuatie == "")
        return false;
	if (verificareOperatii() == false)
		return false;
	if (verificareParanteze() == false)
		return false;
	if (verificareCaractere() == false)
		return false;
    this->ok = true;
	return true;
}

void Verificare::spatiiLibere()
{
	this->ecuatie.erase(remove_if(this->ecuatie.begin(), this->ecuatie.end(), isspace), this->ecuatie.end());
}

bool Verificare::verificareOperatii()
{
    string operatii = "-+/^#";
    string operatii_inceput = "+/^)]";
    string operatii_final = "-+/^#([";
    string operatii_test = "-+/^#)]";
    string sir1, sir = this->ecuatie;
    int x;
    for (int j = 0; j < operatii_inceput.length(); j++) {
        if (this->ecuatie[0] == operatii_inceput[j])
            return false;
    }
    for (int j = 0; j < operatii_final.length(); j++) {
        if (this->ecuatie[this->ecuatie.length()] == operatii_final[j])
            return false;
    }
    for (int i = 0; i < operatii.length(); i++)
    {
        sir = this->ecuatie;
        while (sir.find(operatii[i]) != -1)
        {
            x = sir.find(operatii[i]);
            sir1 = sir.erase(sir.find(operatii[i]), 1);
            for (int j = 0; j < operatii_test.length(); j++) {
                if (sir1[x] == operatii_test[j])
                    return false;
            }
            sir = sir1;
        }
    }
    return true;
}

bool Verificare::verificareParanteze()
{
    return false;
}

bool Verificare::verificareCaractere()
{
    string caractereInterzise = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM;:'<>?=_!@#$%`~|";
    if (this->ecuatie.find('"') != -1)
        return false;
    for (int i = 0; i < caractereInterzise.length(); i++)
        if (this->ecuatie.find(caractereInterzise[i]) != -1)
            return false;
    return true;
}

ostream& operator<<(ostream& out, Verificare v)
{
    out << "Ecuatie: " << v.ecuatie <<endl;
    return out;

}

istream& operator>>(istream& in, Verificare& v)
{
    cout << "Introduceti ecuatia pentru testarea corectitudinii de scriere" << endl;
    in >> v.ecuatie;
    return in;
}
