#include<bits/stdc++.h> 
using namespace std; 


/* 
    Function:
        + Set of code which performs something for u 
        + used to modularise code 
        + used to increase readability 
        + used to use the same code mul time

    



*/


// void printName(string name){

//     cout << "hello " << name << endl;

// }


// int main(){

//     string name;
//     cout << "what ur name: ";  
//     cin >> name; 

//     printName(name);

//     string name2;
//     cout << "what ur name: ";  
//     cin >> name2; 

//     printName(name2);

//     return 0; 
// }



/*

    Take 2 nums and return sum

*/

int sum(int num1, int num2){

    // int num3  = num1 + num2;
    return num1 + num2;

}


int main(){


    int a, b;

    cout << "insert 2 nums: ";
    
    cin >> a >> b;
    
    cout << "sum of " << a << " and " << b << " is " << sum(a, b) << endl;



    return 0; 
}