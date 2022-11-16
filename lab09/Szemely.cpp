//
// Created by Kati on 11/16/2022.
//

#include "Szemely.h"

Szemely::Szemely( string vezetekNev,  string keresztnev, int szuletesiEv) : vezetekNev(vezetekNev),
                                                                                        keresztnev(keresztnev),
                                                                                        szuletesiEv(szuletesiEv) {}


ostream & operator<<(ostream & os,const Szemely & szemely){
   szemely.print(os);
    return os;
}


void Szemely::print(ostream &os) const
{
    os << this->vezetekNev << " " << this->keresztnev << ", " << this->szuletesiEv;

}