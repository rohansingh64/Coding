#include<iostream>
using namespace std;


int sum(int n, int m){
    int a,b;
    if(n<0){
        a=-n;
    }
    else{
        a=n;
    }
    if(m<0){
        b=-m;
    }
    else{
        b=m;
    }
    a = a%10;
    b = b%10;
    return a+b;
}


int main(){
    int n,m;
    cout<<"enter two no : ";
    cin>>n>>m;
    cout<<"the sum of last digit is :"<<sum(n,m);
    return 0;
}