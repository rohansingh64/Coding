#include<iostream>
#include<vector>
#include<string>


using namespace std;


// problem statement -->

// RAT is in the (0,0) it can move U(up) D(down) R(right) L(left) if there is 1(open path)
// rat can not go to 0(closed path)
//find all posible path

bool isValidMove(vector<vector<int>> &m,int n,int x,int y,vector<vector<int>> visited){

    if((x < n && x >= 0)&&(y < n && y >= 0)&&(m[x][y]==1)&&(visited[x][y]==0)){
        return true;
    }
    else{
        return false;
    }


}



void solve(vector<vector<int>> &m,int n,int i,int j,string output,vector<vector<int>> visited,vector<string> &ans){
    

    visited[i][j] = 1;

    if((i == n-1) && (j == n-1)){
        ans.push_back(output);
        return ;
    }
    
    // for down
    int x = i+1;
    int y = j;
    if(isValidMove(m,n,x,y,visited)){
        output.push_back('D');
        solve(m,n,x,y,output,visited,ans);
        output.pop_back();
    }
    //for left
    x = i;
    y = j-1;
    if(isValidMove(m,n,x,y,visited)){
        output.push_back('L');
        solve(m,n,x,y,output,visited,ans);
        output.pop_back();
    }
    //for right
    x = i;
    y = j+1;
    if(isValidMove(m,n,x,y,visited)){
        output.push_back('R');
        solve(m,n,x,y,output,visited,ans);
        output.pop_back();
    }
    //for up
    x = i-1;
    y = j;
    if(isValidMove(m,n,x,y,visited)){
        output.push_back('U');
        solve(m,n,x,y,output,visited,ans);
        output.pop_back();
    }

    visited[i][j] = 0;
}



vector<string> findPath(vector<vector<int>> &m,int n){

    int x = 0;//for row
    int y = 0;//for column

    vector<string> ans; 

    string output;

    vector<vector<int>> visited(m);// or vector<vector<int>> visited = m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j] = 0;
        }
    }

    solve(m,n,x,y,output,visited,ans);

    return ans;

}




int main(){

    // m is maze that is n*n size
    vector<vector<int>> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};

    int n = m.size();

    vector<string> ans = findPath(m,n);

    

    cout<<"possible path is : ";
    for(auto i:ans){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}