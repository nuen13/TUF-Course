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



void explainVector(){
    // alternative to array
    // vector => container, dynamic in nature -> can always change the size unlike array
    // it stores data - similar to array but the size is dynamic which mean we can 
    // use this for task that we unsure about the size

    vector<int> v;              // create an empty container 
    v.push_back(1);             // take 1                                 --> v = {1}
    v.emplace_back(2);          // similar to push_back but faster        --> v = {1, 2} 

    vector<pair<int, int>> vec; // can always change 
    vec.push_back({1, 2});      // --> need curly braces 
    vec.emplace_back(1, 2);     // --> no need auto assume it is a pair

    vector<int> v(5, 100);      // v(x, y) -> x is size and y is value     --> v = {100, 100, 100, 100, 100}

    vector<int> v(5);           // v(x) -> x is just size                  --> v = {0, 0, 0, 0 ,0} ---> or garbage value 
    v.push_back(1);             // add 1 to the back                       --> v = {0, 0, 0 ,0 ,0 ,1} -> size is now 6 

    vector<int> v1(5, 20);      //                                         --> v1 = {20, 20, 20 ,20 ,20}                                 
    vector<int> v2(v1);         //                                         --> v2 = {20, 20, 20, 20, 20} -> copy/clone




    // iterator
    // {20, 10, 15, 6, 7}

    vector<int>::iterator it = v.begin();       // this will point to the memory -> so if it is print -> print the loc address
                                                // point to 20 <-  first element
    it++;                                       // move to next <- 10 
    cout << *(it) << " ";                       // *(it) ---> access the value that `it` is pointing to -> 10 

    it += 2;                                    // shift 2 position -> 6
    cout << *(it) << " ";                       // 6

    vector<int>::iterator it = v.end();         // this wont point to 7 but the loc address after 7
                                                // unless we do it-- then it will point to 7

    // vector<int>::iterator it = v.rend();        // reverse end -> will print the loc adress before 20 

    // vector<int>::iterator it = v.rbegin();      // print 7 --> it ++ --> print 6




    // {1, 2, 4, 56, 67}
    cout << v[0] << " " << v.at(0);    // => 1 1  

    cout << v.back() << " ";           // => 67


    for (vector<int>::iterator it = v.begin(); it != v.end();it ++){    // print vector => 1 2 4 56 67

        cout << *(it) << " "; 
    } 


    for (auto it = v.begin(); it != v.end(); it ++ ){                   // auto -> auto define the data type -> like dynamic in c#


        cout << *(it) << " ";

    }

    for (auto it : v){          // similar to foreach 
        cout << it << " ";
    }

    

    // erase

    //{10, 20 , 12, 23}
    v.erase(v.begin() + 1);  // begin() + 1 -> 20 ----> {10, 12, 13}


    // {10, 2, 3, 4, 51, 1}
    v.erase(v.begin() + 2, v.begin() + 4); // it will look like this [start, end) -> delete start but stop right b4 the end 
    // v.begin() + 2 -> 3
    // v.begin() + 4 -> 51 
    // --> {10, 2, 51, 1}


    // Insert
    vector<int> v(2, 100);             // {100, 100}
    v.insert(v.begin(), 300);          // {300, 100, 100}  --- insert(location, value)
    v.insert(v.begin() + 1, 2, 10);    // {300, 10, 10 , 100, 100} -- insert(location, repeat times, value)

    vector<int> copy(2, 50);                        // {50,50 }
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    cout << v.size()

    v.pop_back() // -> pop the last element 


    // v1 -> {10, 20}
    // v2 -> {12, 23}
    v1.swap(v2);
    v.clear();

    cout << v.empty(); // return BOOL -> if empty ->true 






    



}



int main(){


    return 0; 
}