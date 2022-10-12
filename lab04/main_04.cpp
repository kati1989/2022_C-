#include <iostream>
#include<vector>
#include<iomanip>

//#include "PointSet.h"

using namespace std;


int main() {
    vector<int>v1;
   v1.reserve(1025);//lefoglal 10 et a capacitynek
    cout<<"Size:"<<v1.size()<<endl;
    cout<<"Capacity"<<v1.capacity()<<endl;
    for(int i=0;i<1025;++i){
        //pusch_back vagy emplace_back a vektor vegere beszur egy elemet
       // v1.emplace_back(i);
       v1[i]=i;
        cout<<"Size:"<<v1.size()<<"/Capacity"<<v1.capacity()<<endl;
    }

   PointSet pset1(10);
    return 0;
}