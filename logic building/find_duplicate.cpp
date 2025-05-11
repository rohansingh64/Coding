#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int find_duplicate(int a[],int n){
    int temp = a[0];
    int i=1;
    int j=1;
    while(i<n && j<n){
        temp = temp ^ a[i] ^ j;
        i++;
        j++;
    }
    return temp;
}

int main(){
    int a[100],n;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter array elements 1 to n-1 in such way so that"<<endl;
    cout<<" all elements are unique and one element is duplicate: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array elements are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int duplicate = find_duplicate(a,n);
    cout<<"duplicate element is "<<duplicate;
    return 0;
}