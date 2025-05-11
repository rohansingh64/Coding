#include<iostream>
using namespace std;
#include<bits\stdc++.h>
bool check(int n){
    return(((n)&(n-1))==0);
}
int main(){
    int n;
    cout<<"enter no:";
    cin>>n;
    if(check(n)==1){
        cout<<n<<" is power of 2";
    }
    if(check(n)==0){
        cout<<n<<" is not power of 2";
    }
    return 0;
}