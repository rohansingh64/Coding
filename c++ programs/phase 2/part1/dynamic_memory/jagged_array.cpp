#include<iostream>
using namespace std;

int main(){
    // creating a jagged array using dynamic memory allocation
    int max;
    cout<<"enter max column you may enter :";
    cin>>max;
    int *size = new int[max];
    int row;
    cout<<"enter no of rows :";
    cin>>row;
    //creating rows
    int **arr = new int*[row];

    for(int i=0;i<row;i++){
        int col;
        cout<<"enter no of column in "<<i<<" index row :";
        cin>>size[i];
        col = size[i];
        //creating columns
        arr[i] = new int[col];
    }
    
    

    //taking inputs
    for(int i=0;i<row;i++){
        cout<<"enter "<<size[i]<<" element : ";
        for(int j=0;j<size[i];j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    //output

    cout<<"array is  : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<size[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // realising memory of jagged array

    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete [] arr;


    return 0;

}