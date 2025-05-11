#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
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
    bubble_sort(a,n);
    cout<<"array elements are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}