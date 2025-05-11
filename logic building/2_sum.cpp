#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_array(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

pair<int,int> find_index(int a[],int n,int target){
    pair<int,int> p;
    p.first=-1;
    p.second=-1;
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
                if(a[i]+a[j] == target){
                    p.first=i;
                    p.second=j;
                    return p; // first possible value return 
                }
            }
    }
    return p;
}

int main(){
    int a[100],n,target;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter unique array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array elements are : ";
    print_array(a,n);
    cout<<"enter target value : ";
    cin>>target;
    pair<int,int> p = find_index(a,n,target);

    cout<<p.first<<","<<p.second<<endl;
    return 0;
}