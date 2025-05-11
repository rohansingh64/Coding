#include<iostream>
using namespace std;

//you have to print array in reverse

void print_array_reverse(int arr[],int n){
    if(n==0){
        return ;
    }
    cout<<arr[n-1]<<" ";
    return print_array_reverse(arr,n-1);
}

void print_array(int arr[],int n){
    if(n==0){
        return ;
    }
    //print_array(arr,n-1);//head recursion --> no return only function call 
    //cout<<arr[n-1]<<" ";
   // or
   cout<<arr[0]<<" ";
   return print_array(arr+1,n-1);
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    cout<<"print array reverse "<<endl;
    print_array_reverse(arr,n);

    cout<<endl;

    cout<<"print array  "<<endl;
    print_array(arr,n);

    return 0;
}

