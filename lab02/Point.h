//
// Created by Kati on 9/28/2022.
//

FEJLETT PROGRAMOZÁSI TECHNIKÁK (C++)
2. GYAKORLAT
        ________________________________________________________________________________
Cél:
● Egyszerű C++ osztályok készítése és használata
○ Konstruktor
○ Implicit kezdőértékű paraméterek



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
#endif /*