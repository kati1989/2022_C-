//
// Created by Kati on 9/28/2022.
//

#include <iostream>
#include <fstream>
#include "Point.h"
#include <cmath>

using namespace  std;



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

double distance(const Point& a, const Point& b)
{
    // Calculating distance
    //pow es a 2 es(masodikra emeljuk
    return sqrt(pow(b.getX()-a.getX(),2 ) + pow(b.getY()-a.getY(), 2) * 1.0);
}

void Point::print() const{
    cout<< "X:"<< this->getX()<<"\tY: "<< this->getY();
}

bool isSquare(const Point &a, const Point &b, const Point &c, const Point &d) {
    return (distance(a, b) == distance(b, c) == distance(c, d) == distance(d, a)) //oldalak
           && (distance(a, c) == distance(b, d)); // atlok


}

void testIsSquare(const char *filename) {
    ifstream be(filename);
    int x;
    int y;
    vector<Point> points;
    while (!be.eof()) {
        be >> x;
        be >> y;
        Point a1(x, y);
        be >> x;
        be >> y;
        Point a2(x, y);
        be >> x;
        be >> y;
        Point a3(x, y);
        be >> x;
        be >> y;
        Point a4(x, y);
        a1.print();
        a2.print();
        a3.print();
        a4.print();
        if (isSquare(a1, a2, a3, a4)) cout << "YES";
        else cout << "NO";
        string text;
        getline(be,text);
    }
}