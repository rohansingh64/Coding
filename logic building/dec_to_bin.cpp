#include<iostream>
using namespace std;

void dec_to_bin(int n){
    int a[10];
    int i = 0;
    while(n){
        a[i] = n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<a[j];
    }
}

int main(){
    int n;
    cout<<"enter a decimal no : ";
    cin>>n;
    cout<<"binary = ";
    dec_to_bin(n);
    return 0;
}