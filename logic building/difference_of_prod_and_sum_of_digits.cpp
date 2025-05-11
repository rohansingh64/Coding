#include<iostream>
using namespace std;

int prod(int n){
    int prod=1;
    while(n){
        int d = n%10;
        n = n/10;
        prod = prod*d;
    }
    return prod;
}


int sum(int n){
    int sum=0;
    while(n){
        int d = n%10;
        n = n/10;
        sum = sum+d;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter no : ";
    cin>>n;
    cout<<"the difference of product and sum of digits is:";
    cout<<prod(n)-sum(n);
    return 0;
}
