#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int first_occurence(int a[],int n,int k){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    int ans1 = -1;
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==k){
            ans1 = mid;
            high = mid-1;
        }
        else if(a[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans1;
}


int last_occurence(int a[],int n,int k){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    int ans2 = -1;
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==k){
            ans2 = mid;
            low=mid+1;
        }
        else if(a[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans2;
}

int main(){
    int a[100],n,k;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter array elements in sorted order : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array elements are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"enter key element : ";
    cin>>k;
    cout<<endl;
    int first = first_occurence(a,n,k);
    int last = last_occurence(a,n,k);
    cout<<k<<" first occurance is found at index "<<first<<endl;
    cout<<k<<" last occurance is found at index "<<last<<endl;
    cout<<k<<" total occurance is "<<(last-first+1)<<endl;
    return 0;
}