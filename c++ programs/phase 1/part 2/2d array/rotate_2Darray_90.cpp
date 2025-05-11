// you have to rotate a 2D array by 90 degree

// solution --> you can use concept of 
//      transepose of matrix without other matrix
// in transepose we swap a[i][j]  with a[j][i] if (i<=j)

// we use if(i<=j)  so that already swap element do not swapped again
// if again swap mean we get saeme 2D matrix

// but in this we swap a[i][j]  with a[n-j-1][i] if(i<=j)

#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void rotate(vector<vector<int>> &matrix){
    int temp;
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int n = matrix.size();

    cout<<"before rotation matrix ->  "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    rotate(matrix);

    cout<<" after rotation matrix ->  "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
