#include <iostream>
#include "Szemely.h"
#include "Alkalmazott.h"
#include "Manager.h"

int main() {
    Szemely sz("Hajdu", "Peter ", 1991);
    sz.print();
    cout << endl;
    cout << sz << endl;
    Alkalmazott a("Varga", "Mathe ", 1991, "titkar");
    Alkalmazott a2("Janosi", "Endre", 1960, "sofor");
    Alkalmazott a3("Egyed", "Emese", 1980, "mernok");
    Alkalmazott a4("Biro", "Zoltan", 1982, "technikus");
    Alkalmazott a5("Lukacs", "Gergely", 1985, "informatikus");
    cout << a << "," << endl;

    Manager m("Palfi", "Erika ", 1991, "manager");

    m.addAlkalmazott(&a);
    m.addAlkalmazott(&a2);
    m.addAlkalmazott(&a3);
    m.addAlkalmazott(&a4);

    m.addAlkalmazott(&a5);


    vector<Szemely *> szemelyek;

    szemelyek.push_back(&a);
    szemelyek.push_back(&a2);
    szemelyek.push_back(&a3);
    szemelyek.push_back(&a4);
    szemelyek.push_back(&a5);

    cout<< endl<<" Beosztottak szama:" << m.beosztottakSzama()<<endl;

    m.deleteAlkalmazott(&a);

    cout<< endl<<" Beosztottak szama torles utan:" << m.beosztottakSzama()<<endl;

    cout<<"Manager adatai:"<<endl;
    m.print(cout);

    cout << endl << "A vektorban szereplo szemelyek torles utan:";
    for (int i = 0; i < szemelyek.size(); i++) {
        cout << *szemelyek[i] << endl;
    }



    return 0;
}