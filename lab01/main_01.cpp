#include <iostream>
#include<fstream>
using namespace  std;
int main() {
    ifstream  ifs("input");
    if(!ifs){
        cout<<"File error"<<endl;
        exit(1);
    }

    int sum=0;
    int x;
    while(ifs>>x){
        sum+=x;

    }
    cout<<"sum: "<<sum<<endl;
    return 0;
}
