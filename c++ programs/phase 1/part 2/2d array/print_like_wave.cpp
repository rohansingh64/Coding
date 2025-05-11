#include<iostream>
#include<vector>
using namespace std;

// wave print means first col -> top to buttom
//   then next col as buttom to top and so on

//  n --> no of rows and m --> no of columns

vector<int> wavePrint(vector<vector<int>> arr, int n,int m){
//  we observe that if col no is even(0,2,4,6...)then top to buttom(row=zero to n-1)
// and when col no is odd then buttom to top (row = n-1 to zero)
    vector<int> vect;
    for(int col=0;col<m;col++){
        if(col%2==0){// even
            for(int row=0;row<n;row++){
                vect.push_back(arr[row][col]);
            }
        }
        else{// odd
            for(int row=n-1;row>=0;row--){
                vect.push_back(arr[row][col]);
            }
        }
    }
    return vect;
}

int main(){
    vector<vector<int>> arr = { {1,2},{3,4}};
    int n=2,m=2;
    cout<<"printing the 2-D vector "<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    vector<int> ans = wavePrint(arr,n,m);
    cout<<"printing wave array -> "<<endl;
    for(auto i:ans){
        cout<<i<<"  ";
    }
    return 0;
}