#include<bits/stdc++.h>
using namespace std;

#include <algorithm> // no need in big include already 


void ExplainExtre(){


    

    /*
    
        sort(a, a + n); 
        + a -> start 
        + a + n -> end 
        + noted that it is [start, end)
    
    */

    // {1, 5, 3, 2}

    int array1[]  = {1, 5, 3, 2};


    sort(array1, array1 + 4); // 1, 2, 3, 5
    sort(array1, array1 + 2); // 1, 5
    sort(array1 + 2, array1 + 4); // 2, 3
    sort(array1, array1 + 4, greater<int>()); // 5, 3, 2, 1 --> descending order 

    vector<int> v = {1, 3, 5, 2}; 
    sort(v.begin(), v.end());   // 1, 2, 3, 5
    
    pair<int, int> array2 [] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it according to second element 
    // if second element is same, then sort 
    // it according to first elemnet but in descending 
    

    /*
        sort (a, a + n, comp);

        + n: a.end()
        + comp: self-written comparator --> bool function 
    
    */

    bool comp(pair<int, int> p1, pair<int, int> p2){

        if (p1.second < p2.second) return true;
        if (p1.second > p2.second) return false;
        if (p1.first < p2.first) return true; 

        return false;
    }

    sort(array2, array2 + 3, comp); // {4, 1}, {2, 1}, {1, 2}



    int num1 = 7;                       // binary: 111 
    int cnt = __builtin_popcount(num1); // 3 - count binary 

    long long num2 =121231231334;
    int cnt = __builtin_popcountll(num2);

    string s = "123";

    do{

        cout << s <<endl;

    } while (next_permutation(s.begin(), s.end()))





}