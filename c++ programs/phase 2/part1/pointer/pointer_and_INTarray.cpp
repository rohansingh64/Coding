#include<iostream>
using namespace std;

int main(){
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    cout<<"address of first memory block is "<< arr <<endl;
    cout<<"address of first memory block is "<< &arr[0] <<endl;

    cout<<"*arr --> "<<*arr<<endl;
    cout<<"*arr + 8  --> "<<(*arr)+8<<endl;// *arr + 8  or  *(arr) + 8  same
    cout<<"*(arr + 3)  --> "<<*(arr+3)<<endl;

    // important
    // arr[i] is actually --> *(arr + i) --> *(i + arr) --> i[arr]

    int i = 4;

    cout<<"i[arr] = "<<i[arr]<<endl;

    cout<<endl;
    cout<<endl;


    int temp[10];
    int *p = &temp[0];

    cout<<"size of temp --> "<<sizeof(temp)<<endl;// whole array size 4 x 10 = 40
    cout<<"size of p --> "<<sizeof(p)<<endl;// it refers only one block size 4 bytes(int)

    cout<<"size of *p --> "<<sizeof(*p)<<endl;//*p refers integer at 
                                             //first location size of int = 4
    cout<<"size of *temp --> "<<sizeof(*temp)<<endl;
    cout<<"size of &p --> "<<sizeof(&p)<<endl;
    cout<<"size of &temp --> "<<sizeof(&temp)<<endl;

    cout<<endl;
    cout<<endl;

    int a[10];

    cout<<"a -> "<<a<<endl;
    cout<<"&a -> "<<&a<<endl;
    cout<<"&a[0] -> "<<&a[0]<<endl;
    
    int *ptr = &a[0];

    cout<<"ptr -> "<<ptr<<endl;
    cout<<"&ptr -> "<<&ptr<<endl;

    // a = a+1 or arr = arr + 1 not possible error

    cout<<"ptr before -> "<<ptr<<endl;
    ptr = ptr + 1 ; // possible
    cout<<"ptr after -> "<<ptr<<endl;

    return 0;
}