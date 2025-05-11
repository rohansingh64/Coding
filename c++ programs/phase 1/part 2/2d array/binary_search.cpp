#include<iostream>
#include<vector>
using namespace std;

pair<int,int> binary_search(vector<vector<int>> &matrix,int target){
    int rowsize = matrix.size();
    int colsize = matrix[0].size();
    int low = 0;
    int high = rowsize * colsize - 1;
    pair<int,int> p;
    p.first = -1;
    p.second = -1;
    while(low <= high){
        int mid = (low+high)/2;
        //  index (in linear array) = colsize*i + j
        // from above i = index/colsize  ,  j = index%colsize
        int i = mid/colsize;
        int j = mid%colsize;
        int mid_element = matrix[i][j];
        if(mid_element == target){
            p.first = i;
            p.second = j;
            return p;
        }
        else if(target < mid_element){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return p;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
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
    pair<int,int> p = binary_search(matrix,target);
    if(p.first==-1){
        cout<<"not found";
    }
    else{
        cout<<"found at row index = "<<p.first<<" and column index ="<<p.second;
    }

    return 0;
}