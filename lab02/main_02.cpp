#include <iostream>
#include <algorithm>
#include "Point.h"

using namespace std;
bool comparePoints(const Point &p1,const Point &p2);

int main(int argc, char** argv) {
    Point points[] {{10,10},{1,0},{0,1},{1,1}};
    for(auto& point:points   ){
        cout<<"("<<point.getX()<<","<<point.getY()<<")";
    }


   // sort(points[0],points[3], comparePoints);

    for( auto& point:points){
        cout<<"("<<point.getX()<<","<<point.getY()<<")";
    }
cout<<endl;
    //tavolsag ket pont kozott
    Point p(0,0),p2(0,2),p3(2,2),p4(2,0);
    float dist= distance(p,p2);
    cout<<"Tavolsag ket pont kozott:"<<dist<<endl;

    p.print();
    cout<<endl;

    bool negyzete=isSquare(p,p2,p3,p4);
    if(negyzete==0){
        cout<<"No square";

    } else cout<<"Yes square";

    testIsSquare("points");
    /* Point p1(2,3);
    cout<<"p1( "<<p1.getX()<<","<<p1.getY()<<")"<<endl;
    Point p2(100, 200);
    cout<<"p2( "<<p2.getX()<<","<<p2.getY()<<")"<<endl;
    Point * pp1 = new Point(300, 400);
    Point * pp2 = new Point(500, 1000);
    cout<<"pp1( "<<pp1->getX()<<","<<pp1->getY()<<")"<<endl;
    cout<<"pp2( "<<pp2->getX()<<","<<pp2->getY()<<")"<<endl;
    delete pp1;
    delete pp2;
    return 0;*/
}


bool comparePoints(const Point &p1,const Point &p2){
}

