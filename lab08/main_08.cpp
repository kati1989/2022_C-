#include <iostream>
#include<stdlib.h>

#include<vector>
#include <algorithm>
#include<functional>
#include<algorithm>

using namespace std;

int main() {
    cout << "1 es feladat" << endl;
    vector<string> fruits{"melon", "rasberry", "apple", "banana", "lemon"};

    string toFind = "berry";
    auto result1 = find_if(fruits.begin(), fruits.end(), [&toFind](
            const string &res) {
        return res.find(toFind);
    });

    vector<int> v = {1, 2, 3, 4, 5};
    for_each(v.begin(), v.end(), [](const int &e) {
        cout << e << " ";
    });
    cout << endl;
//    std::generate(v.begin(),v.end()[](const int & e){
//
//    }
//
//    auto result2 = all_of(v.begin(), v.end, print[](
//    const int &e)){
//        return e % 2 == 0;
//    });
//
//    cout << (result2) ? "Mind paros" : "Nem mind paros" << endl;
    cout << "3 feladat" << endl;
    for_each(v.begin(), v.end(), [](int &e) {
        e += e;
    });
    for_each(v.begin(), v.end(), [](const int &e) {
        cout << e << " ";
    });
    cout << endl;

    cout << "4 es feladat: " << endl;
    vector<string> months{
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
    };

    for_each(months.begin(), months.end(), [](string otBetu) {
        if (otBetu.length() == 5) {
            cout << otBetu << " ";
        }
    });

    cout << endl;


    cout << "5-os feladat:" << endl;
    vector<double> d{3.4, 6.5, 10.1, 2.5};
    sort(d.begin(), d.end(), greater<double>());

    for_each(d.begin(), d.end(), [](const double &e) {
        cout << e << " ";
    });
    cout << endl;


    cout << "6 -os feladat";
    vector<pair<string,double>>{{"januar",2.5},{"februar",-2.7},{"marcius","16"}};
    return 0;
}