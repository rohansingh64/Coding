#include<iostream>
#include<vector>
#include<string>

using namespace std;


void solve(string &str, int index, string output, vector<string> &ans){

    //base case
    if(index >= str.length()){

        //before return you need to store output string in ans vector

        // in subsequence no null subsequence like power set so 
        //if output length 0 dont push in ans
        // only non zero legth output goes into ans
        if(output.length()!=0){
            ans.push_back(output);
        }
        return ;
    }

    //exclude --> no change only index increase
    solve(str,index+1,output,ans);

    //include --> push index element in output string and index increase
    output.push_back(str[index]);
    solve(str,index+1,output,ans);
    
}


vector<string> subsequences(string &str){

    vector<string> ans;
    string output;
    int index = 0;
    solve(str,index,output,ans);
    return ans;

}

int main(){

    string str = "abcd";

    cout<<"string str is : "<<str<<endl;

    
    vector<string> ans  =  subsequences(str);

    cout<<"subsequences  are : "<<endl;

    for(auto i:ans){
        cout<<i<<" ";
    }
    
    
    return 0;
}