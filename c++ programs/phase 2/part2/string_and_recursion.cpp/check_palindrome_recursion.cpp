#include<iostream>
#include<string>
using namespace std;

bool check_palindrome(string &s,int i,int j){

    if(i>=j){
        return true;
    }
    if(s[i] !=s [j]){
        return false;
    }
    return check_palindrome(s,i+1,j-1);

}
// n = s.length()
// use n-i-1 in place of j for one pointer approach
int main(){

    string s = "raard";


    int i = 0;
    int j = s.length() - 1;

    if(check_palindrome(s,i,j)){
        cout<<"string is a palindrome"<<endl;
    }
    else{
        cout<<"string is not a palindrome"<<endl;
    }

    return 0;
}
