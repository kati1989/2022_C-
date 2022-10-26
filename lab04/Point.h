//
// Created by Kati on 10/12/2022.
//

#ifndef CPP_2022_POINT_H
#define CPP_2022_POINT_H





class Point{
private:
    int x, y;
    static int counter;
public:
    Point( int x=0, int y=0):x(x), y(y){
        ++counter;
    }
    int getX() const;
    int getY() const;
    double distanceTo(const Point& point)const ;
    //copy konstruktor
    Point(const Point&){
        this->x = x;
        this->y = y;
        ++counter;
    }
    ~Point(){
        --counter;
    }
    static int getCounter(){
        return counter;
    }
};

#endif //CPP_2022_POINT_H
