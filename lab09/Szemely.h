//
// Created by Kati on 11/16/2022.
//

#ifndef CPP_2022_SZEMELY_H
#define CPP_2022_SZEMELY_H

#include <iostream>
#include <stdexcept>

using namespace std;



class Szemely {
protected:
    string vezetekNev;
    string keresztnev;
    int szuletesiEv;
public:
    Szemely( string vezetekNev,  string keresztnev, int szuletesiEv);
    virtual void print(ostream& os=cout) const;
};
ostream & operator<<(ostream & os,const Szemely & szemely);

#endif //CPP_2022_SZEMELY_H
