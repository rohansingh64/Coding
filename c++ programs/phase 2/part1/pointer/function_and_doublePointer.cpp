#include<iostream>
using namespace std;


void update(int **p){

   //  p = p + 1;   // no effect --> no chenge

  // *p = *p + 1;  // ptr1 change

  // **p = **p + 1;  // a value change
}

int main(){

    int a = 10;

    int *ptr1 = &a;

    int **ptr2 = &ptr1;

    cout << endl << "printing values before update " << endl ;
    
    cout << "a --> " << a << endl;
    cout << "ptr1 --> " << ptr1 << endl;
    cout << "ptr2 --> " << ptr2 << endl;

    
    update(ptr2);
    

    cout << endl << "printing values after update " << endl ;
    
    cout << "a --> " << a << endl;
    cout << "ptr1 --> " << ptr1 << endl;
    cout << "ptr2 --> " << ptr2 << endl;

    
    
    cout << endl ;
    return 0;
}