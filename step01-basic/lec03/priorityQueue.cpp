#include<bits/stdc++.h>
using namespace std;



void PiorityQueue(){


    /* 
        Prioroty Queue 
        + element with the higher value stay at the top 
            + with string - the string with the higher lexigraphical order will stay at the top 


        In pq:
        + push, pop  is log(n)
        + tio is O(1)
    
    */

    priority_queue<int> pq; // min heap 


     
    pq.push(5); // 5
    pq.push(2); // 5, 2
    pq.push(8); // 8, 5, 2

    pq.emplace(12); // 12, 8, 5, 2

    cout << pq.top(); // 12

    pq.pop(); // 8, 5, 2

    cout << pq.top(); // 8

    priority_queue<int, vector<int>, greater<int>> pq; // max heap 

    pq.push(5); // 5
    pq.push(2); // 2, 5
    pq.push(8); // 2, 5, 8
    pq.emplace(12); // 2, 5, 8, 12 

    cout << pq.top();  // 2


}
