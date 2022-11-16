//
// Created by Kati on 11/16/2022.
//

#include "Alkalmazott.h"

Alkalmazott::Alkalmazott(string vezetekNev, string keresztnev, int szuletesiEv, string munkakor)
        : Szemely(vezetekNev, keresztnev, szuletesiEv), munkakor(munkakor) {}

void Alkalmazott::print(ostream &os) const {
    Szemely::print(os);
    os << " "<<this->munkakor;
}


