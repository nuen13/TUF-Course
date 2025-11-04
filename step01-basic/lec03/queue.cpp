
#include<bits/stdc++.h>
using namespace std;


void Queue(){

    /*
    Stack is LIFO 
    but 
    Queue is FIFO -> First in First out
    
    
    */



    queue<int> q;

    q.push(1);
    q.push(2);

    q.emplace(4);

    q.back() += 5;

    cout << q.back(); //print 9 

    // Q is {1, 2, 9}
    cout << q.front(); // print 1

    q.pop(); // {2, 9}

    cout << q.front(); // print 2 

}