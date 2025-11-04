#include<bits/stdc++.h>
using namespace std;

/*
    Map: 
    + Similar to Dictionary

*/


void explainMap(){

    map<int, int> mpp;
    mpp[1] = 2;                  // key: 1 value: 2
    mpp.emplace({3, 1});         // key: 3 value: 1
    mpp.insert({2, 4});          // key: 2 value 4

    // unique key + and will be stored in a sorted order 
    // mapp -> { {1, 2} {2, 4} {3, 1} }

    map<int, pair<int, int>> mpp2;

    map<pair<int, int>, int> mpp3; 
    mpp3[{2, 3}] = 10;               // key {2, 3} value: 10 


    // print mpp -> in sorted order of key 
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    } 

    /*
        {1, 3}
        {2, 4}
        {3, 1}
    
    */

    cout << mpp[1]; // 2
    cout << mpp[5]; // 0 -> cuz not exist

    auto it = mpp2.find(3);  // 3 address 

    cout << *(it).second;   // print actual value 

    auto it = mpp.find(5);  // print mpp.end() -> after the map 

    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);


}

