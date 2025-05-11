#include<iostream>
using namespace std;

//inline function work with small functions
//used to reduce function calls overhaed

//how reduce overhead -->
// if function call occurs it takes time and memory
// and inline fuction replace the functionalty of 
//function in place of function call

//create a inline function using 'inline' keyword

inline int getMax(int a,int b){
    return ((a>b)?a:b); // tersary operator
}
int main(){
    int a = 10;
    int b = 20;

    cout<<"max value is : "<<getMax(a,b)<<endl;

    return 0;
}