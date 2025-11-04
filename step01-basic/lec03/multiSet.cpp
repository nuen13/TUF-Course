#include<bits/stdc++.h>
using namespace std;

/*
    Multiset: 
        + all element is sorting
        + NOT unique 

*/


void explainMultiSet(){

    multiset<int> ms;

    ms.insert(1);   // 1
    ms.insert(1);   // 1, 1
    ms.insert(1);   // 1 

    ms.erase(1);    // { }

    int cnt = ms.count(1);  // 3
    
    // only a single 1 erased 
    ms.erase(ms.find(1)); // 1, 1 

    ms.insert(1);   // 1
    ms.insert(1);   // 1, 1
    ms.insert(1);   // 1 
    ms.erase(ms.find(1), next(ms.find(1), 2)); // 1



}