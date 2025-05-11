#include<iostream>
using namespace std;

int sumArray(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){

    int n;
    cout << "enter size of array --> ";
    cin>>n;
    // creating a variable size array using dynamic memory allocation
    int *arr = new int[n];

    cout << "enter elements of array --> ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum = sumArray(arr,n);

    cout << "sum of array elements is --> "<<sum<<endl;

    delete [] arr;// releasing memory used by array arr



    return 0;
}