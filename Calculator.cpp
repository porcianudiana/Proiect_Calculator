#include "Calculator.h"

void Calculator::incarca(int nivel)
{
	if (nivelBaterie + nivel <= 100)
	{
		nivelBaterie += nivel;
		cout << "Nivelul bateriei este: " << nivelBaterie << endl;
	}
	else
	{
		cout << "Calculatorul este incarcat." << endl;
	}
}
