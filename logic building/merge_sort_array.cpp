#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_array(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void merge_sorted_array(int a[],int n,int b[],int m){
    int c[100];
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            c[k] = a[i];
            k++;
            i++;
        }
        else if(a[i]>b[j]){
            c[k] = b[j];
            k++;
            j++;
        }
    }
    while(i<n){
        c[k] = a[i];
        k++;
        i++;
    }
    while(j<m){
        c[k] = b[j];
        k++;
        j++;
    }

    cout<<"sorted merge array is : ";
    print_array(c,m+n);
}

int main(){
    int a[100],n,b[100],m;
    cout<<"enter size of array a : ";
    cin>>n;
    cout<<"enter array a elements in sorted order : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array a elements are : ";
    print_array(a,n);
    cout<<"enter size of array b : ";
    cin>>m;
    cout<<"enter array b elements in sorted order : ";
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    cout<<"array b elements are : ";
    print_array(b,m);
    merge_sorted_array(a,n,b,m);
    return 0;
}