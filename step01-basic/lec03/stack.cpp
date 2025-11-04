
#include<bits/stdc++.h>
using namespace std;


void Stack(){

    /* 
        LIFO - Last in First out
        + element come in last will come out first 
        + imagine when u stacking a box, if u want to clear the box u gotta the take the 
            last one u put in which is the top one 
    
    */

    stack<int> st;

    st.push(1);             // {1}
    st.push(2);             // {2, 1}
    st.push(3);             // {3, 2, 1}
    st.push(4);             // {4, 3, 2, 1}
    st.emplace(5);          // {5, 4, 3, 2, 1}

    cout << st.top();       // --> 5 | "**st[2] is invalid "

    st.pop();               // {4, 3, 2, 1} --> delete 5 - which is the top 1 

    cout << st.top();       // --> 4

    cout << st.size();      // --> 4 

    cout << st.empty();     

    stack<int> st1, st2;

    st1.swap(st2);
}
