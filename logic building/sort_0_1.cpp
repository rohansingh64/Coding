#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_array(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void sort_0_1(int a[], int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(a[i]==0){
            i++;
        }
        else if(a[j]==1){
            j--;
        }
        else if(a[i]==1 && a[j]==0){
            swap(a[i],a[j]);
        }
    }
}

int main(){
    int a[100],n;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter 0 or 1 as array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array elements are : ";
    print_array(a,n);
    
    sort_0_1(a,n);

    print_array(a,n);

    return 0;
}