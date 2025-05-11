#include<iostream>
#include<string>
#include<map>
using namespace std;



int lengthOfLongestSubstring(string s) {
    int maxlength = 0;
    for(int i=0;i<s.length();i++){
        map<char,bool> visit;
        for(int j = i;j<s.length();j++){
            if(visit[s[j]]==false){
                visit[s[j]] = true;
                maxlength = max(maxlength, j-i+1);
            }
            else{
                break;
            }
        }
        visit[s[i]] = false;
    }
    return maxlength;
}

int main(){
    string s;
    cout<<"enter s -> ";

    cin>>s;

    cout<<"lenght of longest Substring Without Repeating Characters -> "<<lengthOfLongestSubstring(s);


    return 0;
}