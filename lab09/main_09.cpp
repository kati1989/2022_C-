#include <iostream>
#include "Szemely.h"
#include "Alkalmazott.h"
#include "Manager.h"

int main() {
    Szemely sz("Hajdu","Peter ",1991);
    sz.print();
    cout<<endl;
    cout<<sz<<endl;
    Alkalmazott a("Varga","Mathe ",1991,"titkar");
    cout<<a<<","<<endl;

    Manager m("Palfi","Erika ",1991,"manager");

    m.addAlkalmazott(&a);


    return 0;
}