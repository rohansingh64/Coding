#include<iostream>
using namespace std;

// array is passed to a function as a pointer 
// not whole array is passed

//proof is check by size print in function --> size = 4 (actual size of array 38)
// because as a pointer pass so only one block memmory size --> 4

void update(int arr[],int n){ // or void update(int *arr,int n){
    cout<<endl<<"size of passed array as pointer -> "<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        arr[i] = arr[i] * 10;
    }
}

int main(){

    int arr[8] = {1,2,3,4,5,6,7,8};

    cout<<"array before update "<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"size of origonal array -> "<<sizeof(arr)<<endl;
    update(arr,8);
    cout<<"array after update "<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // benefit of array passed as pointer not whole array
    // is that we can manipulate some part of an array also

    update(arr+3,5);// changes occurs after 30
    cout<<"array after update only some part "<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}