#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        int j = i+1;
        while(j<n){
            if(a[j]<a[min]){
                min = j;
            }
            j++;
        }
        swap(a[i],a[min]);
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
    selection_sort(a,n);
    cout<<"array elements are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}