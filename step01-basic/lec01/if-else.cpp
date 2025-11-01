#include<bits/stdc++.h>
using namespace std;



// Write a program that input age and print the stage of life
// 0 - 1 -> infant 
// 1 - 12 -> kids
// 12 - 18 -> teenager
// 18 - 40 -> adult
// 40 + -> old 
// int main(){
//     int age;
//     cout << "age: ";
//     cin >> age;

//     if(age <= 1){
//         cout << "u are an infant" << endl;
//     } 
//     else if (age > 1 && age <= 12){
//         cout << "u are a kid" << endl;
//     }
//     else if (age > 12 && age < 18){
//         cout << "u are a teenager" << endl;
//     }
//     else if (age >= 18 && age < 40){
//         cout << "u are an adult" << endl;
//     }
//     else{
//         cout << "u are old" << endl;
//     }






    

//     return 0; 
// }





/* 
    Take the day number and print the coressponding 
    day for 1 print Monday, for 2 print Tuesday, and
    so for 7 print Sunday 
*/

int main(){

    int a;

    cout << "day number: ";
    cin >> a;

    switch (a) {

        case 1: 
            cout << "Monday" << endl;
            break;
        case 2: 
            cout << "Tuesday" << endl;
            break;
        case 3: 
            cout << "Wed" << endl;
            break;
        case 4: 
            cout << "Thur" << endl;
            break;
        case 5: 
            cout << "Fri" << endl;
            break;
        case 6: 
            cout << "Sat" << endl;
            break;
        case 7: 
            cout << "Sun" << endl;
            break;
        default:
            cout << "Ko hop le broski" << endl;
            break;
    }
    cout << " Check";


    return 0; 
}