//
// Created by Kati on 11/16/2022.
//

#include "Manager.h"

Manager::Manager( string vezetekNev, string keresztnev, int szuletesiEv,  string munkakor)
        : Alkalmazott(vezetekNev, keresztnev, szuletesiEv, munkakor) {}

void Manager::addAlkalmazott(Alkalmazott * alkalmazott) {
    this->beosztottak.push_back(alkalmazott);


}
