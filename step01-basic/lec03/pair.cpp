#include<bits/stdc++.h>
using namespace std;

// #include<math.h>
// #include<string.h>
// -----> 

// #inclyde 



// stl -> c++ library 
// compilations of code, functions, containers, etc ... 
// reduce teh code need to write
/*

    STL library is devided into 4 parts:
    + Algorithms
    + Containers
    + Fuctions
    + Iterators


*/


void explainPair(){

    // data type can be anything 
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;


    pair<int, pair<int, int>> pa = {1, {3, 4}};

    cout << pa.first << " " << pa.second.second << " " << pa.second.first;
    // 1 4 3


    pair<int, int> arr[] = {{1, 2}, {2, 5}, {4, 5}};
    cout << arr[1].second;
    // 5
}