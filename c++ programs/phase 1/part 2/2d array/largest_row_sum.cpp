#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void largest_row_sum(int arr[10][10],int m,int n){
    int max = INT_MIN;
    int index;
    for(int row=0;row<m;row++){
        int rowsum=0;
        for(int col=0;col<n;col++){
            rowsum+=arr[row][col];
        }
        if(rowsum>max){
            max = rowsum;
            index = row;
        }
    }
    cout<<"largest row sum index  = "<<index<<endl;
    cout<<"largest row sum  = "<<max<<endl;
}

int main(){
    int arr[10][10];
    int m,n;
    cout<<"enter no of rows (m) and columns (n)";
    cin>>m;
    cin>>n; 
     cout<<"enter elemnts of arr row wise  -> ";
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cin>>arr[row][col];
        }
    }
    //  print 2-D array 

    cout<<"arr -> "<<endl;
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    largest_row_sum(arr,m,n);
    return 0;
}