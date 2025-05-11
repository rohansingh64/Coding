#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int find_unique(int a[],int n){
    int temp = a[0];
    for(int i=1;i<n;i++){
        temp = temp ^ a[i];
    }
    return temp;
}

int main(){
    int a[100],n;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter array elements in such way so that"<<endl;
    cout<<" all elements are double and one element is unique: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array elements are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int unique = find_unique(a,n);
    cout<<"unique element is "<<unique;
    return 0;
}