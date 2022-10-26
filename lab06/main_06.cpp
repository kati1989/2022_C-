#include <iostream>
#include"Polynomial.h"
int main() {

    double coef[]{1,2,1};
    Polynomial p1(2,coef);
    cout<<p1<<endl;
    cout<<"test";


    cout<<p1.evaluate(1)<<endl;

    Polynomial p2=p1;
    cout<<p2;


    return 0;
}