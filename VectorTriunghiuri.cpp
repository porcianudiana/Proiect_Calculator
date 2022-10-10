#include "VectorTriunghiuri.h"
#include "Triunghi.h" 

VectorTriunghiuri::VectorTriunghiuri(vector<Triunghi> v, int nr):Triunghi(c1,c2,i)
{
    this->nr = nr;
    this->v = vector<Triunghi>(nr);
    for (int i = 0; i < nr; i++) {
        this->v.at(i) = v.at(i);
    }
}

int VectorTriunghiuri::get_nr()
{
    return nr;
}

void VectorTriunghiuri::set_nr(int new_nr)
{
    nr = new_nr;
}

ostream& operator<<(ostream& output, VectorTriunghiuri vect)
{
    for (int i = 0; i < vect.nr; i++) {
        
        output << vect.v[i];
       
               output << vect.v.at(i).getc1() << " " << vect.v.at(i).getc2() << " " << vect.v.at(i).getI() << endl;
           }
         output << vect.get_nr() <<  endl;
         return output;
}
