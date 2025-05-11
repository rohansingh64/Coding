#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool isBinaryPalindrome(int n){

    vector<int> v;
    while(n){
        v.push_back(n&1);
        n = n >> 1;
    }
    //reverse(v.begin(),v.end());

    //here we check for palindrome so you
    //do reverse of binary or not same thing
    
    int i = 0;
    int j = v.size() - 1;
    while(i<j){
        if(v[i] != v[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
    
}


int main(){
    int n;

    cout<<"enter decimal no n :";
    cin>>n;

    if(isBinaryPalindrome(n)){
        cout<<"binary of "<<n<<" is a palindrome"<<endl;
    }

    else{
        cout<<"binary of "<<n<<" is not a palindrome"<<endl;
    }

    return 0;
}