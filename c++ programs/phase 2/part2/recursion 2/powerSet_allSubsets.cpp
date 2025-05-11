#include<iostream>
#include<vector>

using namespace std;


void solve(vector<int> &arr, int index, vector<int> subset, vector<vector<int>> &ans){

    //base case
    if(index >= arr.size()){

        //before return you need to store subset array in ans array
        ans.push_back(subset);
        return ;
    }

    //exclude --> no change only index increase
    solve(arr,index+1,subset,ans);

    //include --> push index element in subset array and index increase
    subset.push_back(arr[index]);
    solve(arr,index+1,subset,ans);
    
}


vector<vector<int>> powerSet(vector<int> &arr){

    vector<vector<int>> ans;
    vector<int> subset;
    int index = 0;
    solve(arr,index,subset,ans);
    return ans;

}

int main(){

    vector<int> arr = {1,2,3};//set contains unique elements only

    cout<<"set elements are : "<<endl;

    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;

    vector<vector<int>> powerset  =  powerSet(arr);

    cout<<"power set is : "<<endl;
    
    cout<<"{";
    for(auto i:powerset){
        cout<<"{";
        for(auto j:i){
            cout<<j<<",";
        }cout<<"},";
    }cout<<"}";

    return 0;
}