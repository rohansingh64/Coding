#include<iostream>
#include<string>
using namespace std;

char tolower(char ch){
    if(ch>='A' && ch<='Z'){
        return (ch-'A'+'a');
    }
    else{
        return ch;
    }
}

bool checkPalindrome(string s){

    int i=0;
    int j=s.size()-1;
    while(i<=j){  

        // if charecters are not alphabets or numeric skip them ignore them  acc to question

        if(!isalnum(s[i])){
            i++;
            continue;
        }
        
        if(!isalnum(s[j])){
            j--;
            continue;
        }
        
        // our palindrome is not case sensetive -> before compare
        // we make both to same case (lower or upper case) here we make lower case 
        else if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){

    string s = "c1 O$d@eeD o1c";

    /*     others inputs you can check
    
    c1 O$d@eeD o1c
    N2 i&nJA?a& jnI2n
    A1b22Ba
    aaBBa@

    */
    cout<<"palindrome or not -> "<<checkPalindrome(s);
    return 0;
}