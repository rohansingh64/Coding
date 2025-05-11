#include<iostream>
#include<vector>
#include<string>
using namespace std;


void solve(string digits,int index,string output,vector<string> &ans){

    if(index >= digits.length()){
        ans.push_back(output);
        return ;
    }

    vector<string> mapper = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    int map_index = digits[index] - '0';
    string value = mapper[map_index];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digits,index+1,output,ans);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits){

    vector<string> ans;

    int index = 0;

    string output;

    if(digits.length()==0){
        return ans;
    }

    solve(digits,index,output,ans);

    return ans;
}

int main(){
    string digits = "93"; // in phone keypad only 2 to 9 have letters mapping

    vector<string> ans = letterCombinations(digits);

    cout<<"letter combinations are : "<<endl;
    for(auto i:ans){
        cout<<i<<"  ";
    }
    return 0; 
}