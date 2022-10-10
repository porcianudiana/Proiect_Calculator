#include "Calculare.h"
#include <fstream>
Calculare::Calculare():id_oper(0)
{
	operand = NULL;
	x = 0.0;
	y = 0.0;
}

Calculare::Calculare(int id_oper, char operand, double x, double y):id_oper(1)
{
	this->operand = operand;
	this->x = x;
	this->y = y;
}

Calculare::~Calculare()
{
}

bool Calculare::operator<(Calculare c)
{
	return x < c.x;
}

bool Calculare::operator>(Calculare c)
{
	return y > c.y;
}

bool Calculare::operator<=(Calculare c)
{
	return x <= c.x;
}

bool Calculare::operator>=(Calculare c)
{
	return y >= c.y;
}

bool Calculare::operator==(Calculare c)
{
	return x == c.x;
}

double Calculare::calcul(double x, char operand, double y)
{
	switch (operand)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	case '^':
		return pow(x, y);
	default:
		return 0.0;
	}


	

}



ostream& operator<<(ostream& out, Calculare c)
{
	out << "Id:" << c.id_oper << endl;
	out << "Numar:" << c.x << endl;
	out << "Operand:" << c.operand << endl;
	out << "Numar:" << c.y << endl;

	return out;
}

istream& operator>>(istream& in, Calculare& c)
{
	
	double result;
	cout << "Introduceti operatia dorita:" << endl;
	in >> c.operand;

	while (c.operand != 'z') {

		if (c.operand == '+' || c.operand == '-' || c.operand == '*' || c.operand == '/' || c.operand == '^')
		{
			
			cout << "Introduceti termenii si operandul:" << endl;
			in >> c.x >> c.operand >> c.y;

				if (c.operand == '/' && c.y == 0)
				{
					cout << "Exceptie. Impartirea la 0 nu are sens" << endl;

				}
				else
				{
					result = c.calcul(c.x, c.operand, c.y);
					cout << "Rezultatul este: " << result << endl;

					

				}
			

		}
		else if (c.operand == '#')
		{
			in >> c.x;
			cout << "Rezultatul este: " << sqrt(c.x) << endl;


		}
		in >> c.operand;
	}

	return in;
}

ofstream& operator<<(ofstream& f, Calculare cl)
{
	if (f.is_open())
	{
		f << "Id:" << cl.id_oper << endl;
		f << "Numar:" << cl.x << endl;
		f << "Operand:" << cl.operand << endl;
		f << "Numar:" << cl.y << endl;
		
	}
	return f;
}

ifstream& operator>>(ifstream& f, Calculare& cl)
{
	if (f.is_open())
	{
		f >> ws;

		double result;
		cout << "Introduceti operatia dorita:" << endl;
		f >> cl.operand;

		while (cl.operand != 'z') {

			if (cl.operand == '+' || cl.operand == '-' || cl.operand == '*' || cl.operand == '/' || cl.operand == '^')
			{

				cout << "Introduceti termenii si operandul:" << endl;
				f >> cl.x >> cl.operand >> cl.y;
				if (cl.operand == '/' && cl.y == 0)
				{
					cout << "Exceptie. Impartirea la 0 nu are sens" << endl;

				}
				else
				{
					result = cl.calcul(cl.x, cl.operand, cl.y);
					cout << "Rezultatul este: " << result << endl;

				}


			}
			else if (cl.operand == '#')
			{
				f >> cl.x;
				cout << "Rezultatul este: " << sqrt(cl.x) << endl;


			}
			f >> cl.operand;
		}
	}
	return f;
}
