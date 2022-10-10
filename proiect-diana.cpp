#include <iostream>
#include <string>
#include "Verificare.h"
#include "Calcul.h"
#include "Calculare.h"
#include "TermenEcuatie.h"
#include "Triunghi.h"
#include "FunctiiTrigonometrice.h"
#include "BaterieCalculator.h"
#include "Calculator.h"
#include"VectorTriunghiuri.h"
#include <fstream>
using namespace std;

int main()
{

    cout << "Introduceti valoarea 1 daca doriti sa efectuati modificarea semnului unui termen" << endl;
    cout << "Introduceti valoarea 2 daca doriti sa efectuati calculele propuse de program cu un numar la alegere introdus de dumneavoastra" << endl;
    cout << "Introduceti valoarea 3 daca doriti sa efectuati calcule la alegere introduse de dumneavoastra" << endl;
    cout << "Introduceti valoarea 4 daca doriti sa efectuati calcule utilizand functii geometrice si pentru a vedea starea bateriei calculatorului" << endl;
    int a;
    cin >> a;
    if (a == 1)
    {
        string c = "   (5+6  )";
        cout << c << endl;
        c.erase(remove_if(c.begin(), c.end(), isspace), c.end());
        cout << c << endl;
        TermenEcuatie t1;
        TermenEcuatie t2("negativ", 6);
        cout << t1 << endl;
        cout << t2 << endl;
        TermenEcuatie t3;
        cin >> t3;
    }
    else if (a == 2) {
        Calcul c1;
        cin >> c1;
        cout << c1;
        Calcul c2(5);
        Calcul c3(4);
        cout << c2 + 2;
        Calcul c4 = c2 + 10;
        cout << c4;
        cout << c2 - 6;
        cout << c3 * 2.9;
        cout << c3 / 6;
        cout << c1 + c2;
        cout << c1 - c3;
        cout << c1 * c4;
        cout << c1 / c3;
        if (!c4)
        {
            cout << "Numarul este pozitiv" << endl;
        }
        else
        {
            cout << "Numarul este negativ" << endl;
        }
        cout << c2 / 0;
        double d = (double)c2;
        cout << "Patratul numarului este:" << d << endl;
        cout << "Preincrementare" << endl;
        cout << operator++(c2);

        c2.serializare();
        c3.deserializare();
    }
    else if (a == 3) {
        cout << "Va rog introduceti operatia dorita. Formatul: + a+b | - a-b |* a*b | /a/b | ^a^b" << endl;
        cout << "Pentru a efectua radical introduceti # urmat de termenul dorit" << endl;
        cout << "Pentru a opri calculul introduceti z" << endl;
        Calculare cl;
        cin >> cl;
    }
    else if (a == 4) {
        Verificare ec;
        cin >> ec;
        ec.spatiiLibere();
        cout << ec;
        cout << "Ecuatia contine o operatie matematica?" << endl;
        cout << ec.verificareOperatii() << endl;
        cout << "Ecuatia contine caractere interzise?" << endl;
        cout << ec.verificareCaractere() << endl;

        Triunghi t(3, 4, 5);

        FunctiiTrigonometrice ft(3, 4, 5);

        t.calcul_sinus();
        ft.calcul_sinus();
        t.calcul_cosinus();
        ft.calcul_cosinus();
        t.calcul_tangenta();
        ft.calcul_tangenta();
        t.calcul_cotangenta();
        ft.calcul_cotangenta();

        

        Triunghi* tr2 = new Triunghi(4, 8, 7);
        Triunghi* tr3 = new Triunghi(4, 10, 30);
        vector<Triunghi> v;
        v.push_back(*tr2);
        v.push_back(*tr3);
        VectorTriunghiuri* vector = new VectorTriunghiuri(v, 2);
        cout << *vector;


        Calculator calc;
        BaterieCalculator* bc = nullptr;

        bc = &calc;

        bc->incarca(30);
        bc->incarca(100);
    }
    Calculare cl1;
    ofstream f("fisier.txt");
    f << cl1;
    f.close();
    



    return 0;
    

}
