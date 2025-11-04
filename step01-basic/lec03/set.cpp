#include<bits/stdc++.h>
using namespace std;



/*
    Set: 
    + store in sorted order
    + every elements is unique 

*/


void explainSet(){


    set <int> st;

    st.insert(1);   // 1
    st.emplace(2);  // 1, 2
    st.insert(2);   // 1, 2 
    st.insert(4);   // 1, 2, 4
    st.insert(3);   // 1, 2, 3, 4

    // Functionality of insert in a vector can also be used -> that only increase efficiency

    // begin, end, rend, rbegin, size, empty, swap are the same as those above above 


    // 1, 2, 3, 4, 5

    auto it = st.find(3); // 3 -> address
    auto it = st.find(6); // st.end() -> after 5

    st.erase(5);    // erase 5

    int cnt = st.count(1); // always 1 -> cuz it always unique // 0 if not exist 
    auto it = st.find(3);
 
    st.erase(it);  // O(1)

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    
    // 1, 2, 3, 4, 5
    st.erase(it1, it2); // => this will delete 2 and 3 NOT 4 ==> [start, end)

    // lower_bound , upper_bound() works the same way as vector 


    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);



}