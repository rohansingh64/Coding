#include<iostream>
using namespace std;

#define PI 3.14   // replace all PI with 3.14 before compilation

int main(){
   
   /*
    int r = 5;// radius of circle

    double pi = 3.14;  // take storage and changed also in code

    cout << "area of circle : " << (pi * r * r) << endl;

    cout << "before pi = " << pi << endl;
    pi = pi + 1;
    cout << "after pi = " << pi << endl;

    */

    int r = 5;

    cout << "area of circle : " << (PI * r * r) << endl;

    //PI = PI + 2; --> gives error because macros are not changable     

    return 0;
}