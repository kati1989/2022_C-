//
// Created by Kati on 11/16/2022.
//

#include "Manager.h"

Manager::Manager(string vezetekNev, string keresztnev, int szuletesiEv, string munkakor)
        : Alkalmazott(vezetekNev, keresztnev, szuletesiEv, munkakor) {}

void Manager::addAlkalmazott(Alkalmazott *alkalmazott) {
    this->beosztottak.push_back(alkalmazott);


}

void Manager::deleteAlkalmazott(Alkalmazott *a) {
    int c = 0;
    for (auto &it: beosztottak) {
        c++;
        if (a == it) {
            beosztottak.erase(beosztottak.begin() + c);
        }
    }
}

int Manager::beosztottakSzama() const {
    //query=const!!
    return beosztottak.size();
}

void Manager::print(ostream &os) const {
    Alkalmazott::print(os);
    os << " beosztottak szama: " << beosztottakSzama();
}

