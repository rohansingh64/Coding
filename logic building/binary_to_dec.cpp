#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bin_to_dec(int n){
    int d;
    int s=0;
    int i=0;
    while(n){
        d = n%10;
        s = s + d*pow(2,i);
        n = n/10;
        i++;
    }
    return s;
}
int main(){
    int n;
    cout<<"enter a binary no : ";
    cin>>n;
    cout<<"decimal = "<<bin_to_dec(n);
    return 0;
}