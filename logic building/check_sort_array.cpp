#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int check_sorted_or_not(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return -1;
        }
    }
    return 1;
}

int main(){
    int a[100],n;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array elements are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int check = check_sorted_or_not(a,n);
    if(check==-1){
        cout<<"array is not sorted";
    }
    if(check==1){
        cout<<"array is sorted";
    }
    return 0;
}