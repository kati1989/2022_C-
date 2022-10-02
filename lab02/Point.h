//
// Created by Kati on 9/28/2022.
//


#ifndef POINT_H
#define POINT_H
#include "vector"
class Point{
private:
    int x, y;
public:
    Point( int x=0, int y=0);
    int getX() const;
    int getY() const;
    void print() const;
};

double distance(const Point& a, const Point& b);
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d);
void testIsSquare(const char *filename);



#endif //
/*FEJLETT PROGRAMOZÁSI TECHNIKÁK (C++)
2. GYAKORLAT
________________________________________________________________________________
Cél:
● Egyszerű C++ osztályok készítése és használata
○ Konstruktor
○ Implicit kezdőértékű paraméterek
○ Konstans tagfüggvények
● Fordítás- és futásidejű objektumok
Adott egy képernyőpontot ábrázoló Point osztály.
● a példány adattagjaira: this mutató (this->x)
● a láthatóságokat blokkokra adjuk meg; pl. public: alapértelmezett a private
● ha egy metódus nem változtatja meg az objektum állapotát - konstans tagfüggvény - const
módosító
// Point.h - interfész
#ifndef POINT_H
#define POINT_H
class Point{
private:
int x, y;
public:
Point( int x=0, int y=0);
int getX() const;
int getY() const;
};
#endif
// Point.cpp - implementáció
#include "Point.h"
Point::Point(int x, int y) {
    if (x >= 0 && x <= 2000 && y >= 0 && y <= 2000){
        this->x = x;
        this->y = y;
    }
    else{
        this->x = 0;
        this->y = 0;
    }
}
int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y;
}
FEJLETT PROGRAMOZÁSI TECHNIKÁK (C++)
2. GYAKORLAT
        ________________________________________________________________________________
1. Készítse el a Point osztályt a következőképpen:
● CLion: New Class (ez létrehozza a Point.h és Point.cpp állományokat)
● A Point.h fejállományban deklarálja az x és y adattagokat, majd generálja ki a
        konstruktort és a get metódusokat.
● Módosítsa a kódot a fent megadott kódnak megfelelően.
2. Tanulmányozza a Point osztály alábbi használatát (main) és válaszoljon a következő
kérdésekre:
● Mi a különbség a p1,p2, illetve a pp1, pp2 között?
● Mi a szerepe a delete operátornak?
● Miért nem használható a delete a p1, p2 esetében?
● Mi a cout?
#include <iostream>
#include "Point.h"
using namespace std;
int main(int argc, char** argv) {
    Point p1(2,3);
    cout<<"p1( "<<p1.getX()<<","<<p1.getY()<<")"<<endl;
    Point p2(100, 200);
    cout<<"p2( "<<p2.getX()<<","<<p2.getY()<<")"<<endl;
    Point * pp1 = new Point(300, 400);
    Point * pp2 = new Point(500, 1000);
    cout<<"pp1( "<<pp1->getX()<<","<<pp1->getY()<<")"<<endl;
    cout<<"pp2( "<<pp2->getX()<<","<<pp2->getY()<<")"<<endl;
    delete pp1;
    delete pp2;
    return 0;
}
3. Bővítse ki az osztályt egy kiírató metódussal!
void print() const;
4. Készítsen önálló függvényt, amely meghatározza két pont távolságát.
double distance(const Point& a, const Point& b);
5. Készítsen önálló függvényt, amely ellenőrzi, hogy 4 pont alkothat-e négyzetet.
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d);
6. Készítsen egy önálló tesztelő függvényt az előző isSquare függvényhez. Ez a függvény
        olvassa be az állományból a pontok koordinátáit, majd hívja meg ezekre az isSquare
        függvényt. Az állomány minden sora négy pont koordinátáit tartalmazza. A tesztelő
FEJLETT PROGRAMOZÁSI TECHNIKÁK (C++)
2. GYAKORLAT
        ________________________________________________________________________________
függvény írassa ki a négy pontot, illetve egy YES/NO üzenetet annak megfelelően, hogy
négyzetet alkot-e a megadott négy pont.
void testIsSquare(const char * filename);
points.txt
10 10 10 10 10 10 10 10 // A(10, 10), B(10, 10), C(10, 10), D(10, 10)
10 10 10 20 10 10 10 20
10 10 10 10 10 10 10 20
10 10 10 20 20 20 20 10
10 10 10 20 30 20 30 10
10 10 20 20 30 20 20 10
10 10 20 20 30 10 20 0
10 10 20 10 30 10 40 10
10 10 20 10 30 10 30 20
10 10 30 10 20 0 20 20
7. Készítsen függvényt, amely véletlenszerűen előállít megadott számú (N) pontot, elhelyezi
        ezeket egy dinamikus helyfoglalású tömbben és visszatéríti ennek címét. A pontok
koordinátái legyenek a 0 és 2000 közötti egész számok ([0, 2000]).
Point * points = new Point[N];
A függvényt tesztelje úgy, hogy az N-et olvassa be a standard bemenetről.
Point* createArray(int numPoints);
8. Készítsen függvényt, amely kiírja a paraméterül kapott pontokat tartalmazó tömböt.
void printArray(Point* points, int numPoints);
9. Készítsen függvényt, amely meghatározza egy pontokat tartalmazó tömbben a legközelebbi
        pont párt. Ha több ilyen is van, csak egyet kell meghatározni.
pair<Point, Point> closestPoints(Point* points, int numPoints);
10. Készítsen függvényt, amely meghatározza egy pontokat tartalmazó tömbben a legtávolabbi
        pont párt. Ha több ilyen is van, csak egyet kell meghatározni.
pair<Point, Point> farthestPoints(Point* points, int numPoints);
11. Készítsen függvényt, amely rendezi a points tömböt abszcissza (x koordináta) szerint
        növekvő sorrendbe, majd írassa ki a standard kimenetre. Használja a sort algoritmust
void sortPoints(Point* points, int numPoints);
FEJLETT PROGRAMOZÁSI TECHNIKÁK (C++)
2. GYAKORLAT
        ________________________________________________________________________________
12. Készítsen függvényt, amely meghatározza az origótól legtávolabbi 10 pontot egy bemeneti
        pontokat tartalmazó tömbből! Törekedjen hatékonyságra (a tömb elemeit csak egyszer
járhatja be)!
Point* farthestPointsFromOrigin(Point* points, int numPoints);
13. Készítsen függvényt, amely felszabadít egy dinamikus helyfoglalású, pontokat tartalmazó
        tömböt!
void deletePoints(Point* points);
Szabadítsa fel az összes dinamikus helyfoglalású tömböt!
Figyelem!!!
● A Point osztályt nem módosíthatja (kivétel a 3. feladatnál kért print metódus)!
● Az önálló függvényeket helyezze egy util modulba (util.h, util.cpp).
● A main függvényben rendre hívja meg a 6 - 13 feladatok függvényeit!
EXTRA:
Dolgozzon N = 1 000 000 elemű ponthalmazzal és implementáljon hatékony algoritmusokat a 9. és
10. feladatokhoz
 */