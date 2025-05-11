#include<iostream>
using namespace std;

int main(){

    int a = 10;

    int *p = &a;

    int **ptr = &p;

    // printing a value (10)
    cout << endl << "printing a value (10)" << endl ;
    
    cout << "a --> " << a << endl;
    cout << "*p --> " << *p << endl;
    cout << "**ptr --> " << **ptr << endl;

    // printing address of a or p value
    cout << endl << "printing address of a or p value" << endl ;

    cout << "&a --> " << &a << endl;
    cout << "p --> " << p << endl;
    cout << "*ptr --> " << *ptr << endl;

    // printing address of p or value of ptr
    cout << endl << "printing address of p or value of ptr" << endl ;

    cout << "&p --> " << &p << endl;
    cout << "ptr --> " << ptr << endl;

    // printing address of ptr
    cout << endl << "printing address of ptr" << endl ;
    
    cout << "&ptr --> " << &ptr << endl;
    
    cout << endl ;
    return 0;
}