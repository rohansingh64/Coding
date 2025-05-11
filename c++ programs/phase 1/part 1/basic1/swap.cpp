/* 
WRITE A c++ PROGRAM FOR SWAP 2 NOS
*/
//we can use pass by reference
#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{   int a,b;
    cout<<"\nenter 2 numbers : ";
    cin>>a>>b;
    cout<<"\nthe value of a and b before swapping :"<<a<<" and "<<b;
    swap(a,b);
    cout<<"\nthe value of a and b after swapping :"<<a<<" and "<<b;
    return 0;
}