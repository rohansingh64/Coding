#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>> &matrix,int target){
    int rowsize = matrix.size();
    int colsize = matrix[0].size();

    // important observation 
    // taking first row , last column element as first element

    int row = 0;
    int col = colsize - 1;

    while( row < rowsize && col >= 0 ){
        int element = matrix[row][col];
        if(element == target){
            return 1;
        }
        else if(target < element){
            col--;
        }
        else{
            row++;
        }
    }
    return 0;
}

int main(){
    vector<vector<int>> matrix = {
                                  {1,4,7,11,15},
                                  {2,5,8,12,19},
                                  {3,6,9,16,22},
                                  {10,13,14,17,24},
                                  {18,21,23,26,30}
                                  };
    int rowsize = matrix.size();
    int colsize = matrix[0].size();
    cout<<"matrix -> "<<endl;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"enter target ";
    cin>>target;
    bool b = search(matrix,target);
    if(b){
        cout<<"found";
    }
    else{
        cout<<" not found";
    }

    return 0;
}