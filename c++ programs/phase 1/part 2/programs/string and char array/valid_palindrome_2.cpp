#include<iostream>
#include<string>
using namespace std;

// here if after removing atmost one character from
// a string it becomes a palindrome then return true else false

bool ispalindrome(int i,int j,string s){
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;
    int count = 0;
    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
            return(ispalindrome(i+1,j,s) || ispalindrome(i,j-1,s));
        }
    }
    return true;
}

int main(){

    string s = "deeee";

    if(validPalindrome(s)){
        cout << "possible ";
    }
    else{
        cout << "not possible ";
    }

    return 0;
}
