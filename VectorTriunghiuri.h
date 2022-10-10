#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Triunghi.h"
using namespace std;
class VectorTriunghiuri:public Triunghi
{

public:
    vector <Triunghi> v;
    int nr;
    VectorTriunghiuri(vector<Triunghi> v, int nr);
    int get_nr(); 
    void set_nr(int new_nr);
    friend ostream& operator<< (ostream& output, VectorTriunghiuri vect);
};

