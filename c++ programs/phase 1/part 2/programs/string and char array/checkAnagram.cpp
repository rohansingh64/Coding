#include<iostream>
#include<string>
#include<vector>
using namespace std;

// 2 string are anagram if  charecters are same in both
// can change order of charecters


bool isAnagram(string s, string t) {
    if(s.length() != t.length()){
        return false;
    }
    vector<int> count1(26,0);
    for(int i=0;i<s.length();i++){
        int p = s[i]-'a';
        count1[p]++;
    }
    vector<int> count2(26,0);
    for(int i=0;i<s.length();i++){
        int p = t[i]-'a';
        count2[p]++;
    }
    for(int i=0;i<26;i++){
        if(count1[i] != count2[i]){
            return false;
        }
    }
    return true;
}



int main(){

    string s = "rohan";

    string t = "noahr";

    
    cout<<"anagram or not -> "<<isAnagram(s,t);
    return 0;
}