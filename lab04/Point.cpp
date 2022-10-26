//
// Created by Kati on 10/12/2022.
//

#include <valarray>
#include "Point.h"
#include <vector>

int Point::counter = 0;
int Point:: getX() const{
    return x;

}

int  Point::getY() const{
    return y;
}



double Point::distanceTo(const Point& point)const {
    double d=sqrt(((getX()-point.getX())*(getX()-point.getX()))+((getY()-point.getY())*(getY()-point.getY())));
    return d;
}

