#include<iostream>
#include<string>
#include<vector>
using namespace std;


void solve(string str,int index,vector<string> &ans){

    if(index >= str.length()){
        ans.push_back(str);
        return ;
    }

    for(int j=index;j<str.length();j++){
        swap(str[index],str[j]);
        solve(str,index+1,ans);
        swap(str[index],str[j]);
    }



}




vector<string> getPermutations(string &str){

    vector<string> ans;

    int index = 0;

    solve(str,index,ans);

    return ans;

}


int main(){

    string str = "abc"; // all charecter should be different  otherwise duplicate in permutations

    vector<string> result;

    result = getPermutations(str);

    for(auto i:result){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}