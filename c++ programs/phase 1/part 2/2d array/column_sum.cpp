#include<iostream>
using namespace std;

void column_sum(int arr[10][10],int m,int n){
    for(int col=0;col<n;col++){
        int columnsum=0;
        for(int row=0;row<m;row++){
            columnsum+=arr[row][col];
        }
        cout<<"column sum of column index "<<col<<" is "<<columnsum<<endl;
    }
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
    column_sum(arr,m,n);
    return 0;
}