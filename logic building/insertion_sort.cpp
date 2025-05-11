#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n){
    for(int i=1;i<n;i++){
        int temp = a[i];
        int j = i-1;
        while(j>=0){
            if(temp<a[j]){
                a[j+1]=a[j];
                j--;
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }
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
    insertion_sort(a,n);
    cout<<"array elements are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}