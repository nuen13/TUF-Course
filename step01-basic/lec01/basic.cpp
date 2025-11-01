#include<iostream>
#include<bits/stdc++.h> // Get all important lib exist in cpp

using namespace std;

int main() {


    // Print 
    std::cout <<"Yo" << "\n";
    std::cout <<"Yo" << std::endl << "Hey bro!" << std::endl;

    std::cout << "hey";


    cout<<"\n" << "Hello" << endl; // with namespace std 

    // input 
    int x, y;
    cin >> x >> y;
    // cin >> x;
    // cin >> y;

    cout << "value of x: " << x << " and y: " << y;



    // natural nums (neg and pos)
    int a = 120;
    long b = 123; //wider range than `int` 
    long long c = 1312312631; // wider wider range 

    // decimal number -> can also store int 
    float d = 12.232;
    float e = 34;

    double f = 121.2323;
    double f = 12;

    // string, character
    
    // hey me 
    // string does not pickup the space -> like end at space 
    string s1; // --> only store hey 
    string s2; 

    cin >> s1 >> s2;
    cout << s1 <<  " " << s2;
    string str;
    getline(cin, str);

    cout << str;

    char ch = 'a'; 
    cin >> ch;
    cout << ch;

    



    return 0;
}