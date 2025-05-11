#include<iostream>
using namespace std;

// m --> no of rows 
// n --> no of columns
int main(){

    int row,col;
    cout << "enter row size and column size value : ";
    cin>>row>>col;

    // creating a 2-D array
    int **arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    // input
    cout<<"enter elements :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //output
    cout<<"2-D array is  :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing 2-D array memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete [] arr;


    return 0;
}