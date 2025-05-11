#include<iostream>
using namespace std;

int main(){

    // create a 2-D array 

    int arr[10][10];
    int m,n;
    cout<<"enter no of rows (m) and columns (n)";
    cin>>m;
    cin>>n; 

    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};// take as row wise

    //int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,19,33}};

    // taking input row wise 

    cout<<"enter elemnts of arr row wise  -> ";
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cin>>arr[row][col];
        }
    }

    // taking input column wise 

    /*cout<<"enter elemnts of arr column wise  -> ";
    for(int col=0;col<n;col++){
        for(int row=0;row<m;row++){
            cin>>arr[row][col];
        }
    } */

    //  print 2-D array 

    cout<<"arr -> "<<endl;
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}