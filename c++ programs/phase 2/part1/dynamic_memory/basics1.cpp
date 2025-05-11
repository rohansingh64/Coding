#include<iostream>
using namespace std;

int main(){

    // in heap int size memory is created by new int;
    // this statement return an address
    //create int *ptr for storing address

    int *ptr = new int;
    *ptr = 12;
    cout<<"*ptr = "<<*ptr<<endl;

    // releasing memory in heap created by int(ptr pointing memory)
    // releasing memory means at that memory 12 is deleted

    delete ptr;

    // after realising memory pointing by ptr
    // ptr becomes dangling pointer
    // dangling pointer --> a pointer whose pointing memory freed or deleted

    // to avoid dangling pointer initialise it with null
    ptr = NULL;
    
    return 0;
}