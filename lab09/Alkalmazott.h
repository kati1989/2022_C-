//
// Created by Kati on 11/16/2022.
//

#ifndef CPP_2022_ALKALMAZOTT_H
#define CPP_2022_ALKALMAZOTT_H


#include "Szemely.h"

class Alkalmazott: public Szemely {
protected:
    string munkakor;
public:
    Alkalmazott(string vezetekNev, string keresztnev, int szuletesiEv, string munkakor);

    virtual  void print(ostream& os)const override;

};


#endif //CPP_2022_ALKALMAZOTT_H
