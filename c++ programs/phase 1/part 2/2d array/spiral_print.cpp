#include<iostream>
#include<vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix){
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    vector<int> ans;

    int startRow = 0;
    int endRow = rowSize-1;
    int startCol = 0;
    int endCol = colSize-1;

    int count = 0;
    int total = rowSize*colSize;

    while(count < total){

        // printing starting row

        for(int col=startCol;count < total && col<=endCol;col++){
            ans.push_back(matrix[startRow][col]);
            count++;
        }
        startRow++;

        // printing ending column

        for(int row=startRow;count < total && row<=endRow;row++){
            ans.push_back(matrix[row][endCol]);
            count++;
        }
        endCol--;

        // printing ending row
    
        for(int col=endCol;count < total && col>=startCol;col--){
            ans.push_back(matrix[endRow][col]);
            count++;
        }
        endRow--;

        // printing starting column
    
        for(int row=endRow;count < total && row>=startRow;row--){
            ans.push_back(matrix[row][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;

}

int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    vector<int> res = spiralOrder(matrix);
    cout<<"matrix in spiral order "<<endl;
    for(auto i:res){
        cout<<i<<"  ";
    }

    return 0;
}