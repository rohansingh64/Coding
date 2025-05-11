#include<iostream>
using namespace std;

//printing sum of fibonacci series of n number

int fibbo(int n){ // this function is for n'th fibonacci number
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return(fibbo(n-1) + fibbo(n-2));
}

int sum(int n){
    if(n==0){
        return 0;
    }
    return(fibbo(n) + sum(n-1));
}

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    cout<<sum(n);

    return 0;
}