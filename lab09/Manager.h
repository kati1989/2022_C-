//
// Created by Kati on 11/16/2022.
//

#ifndef CPP_2022_MANAGER_H
#define CPP_2022_MANAGER_H


#include "Alkalmazott.h"
#include<vector>

class Manager : public  Alkalmazott{
    vector<Alkalmazott*> beosztottak;
public:

    Manager( string vezetekNev,  string keresztnev, int szuletesiEv, string munkakor);
    void addAlkalmazott(Alkalmazott*);

};


#endif //CPP_2022_MANAGER_H
