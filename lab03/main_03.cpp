#include <iostream>
#include "List.h"


int main() {
    List list1;
    for(int i=0;i<10;++i){
        list1.insertFirst(i);
        list1.print();

    }
    //bitenkent lamasolodik a list1
    List list2=list1;

    cout<<"list2"<<endl;
    list2.print();

    cout <<"Exists:"<<list1.exists(1)<<endl;

    cout<<"Size:"<<list1.size()<<endl;

    cout<<"Empty:"<<list2.empty()<<endl;

    return 0;

}
