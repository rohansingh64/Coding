#include<iostream>
using namespace std;

//printing fibonacci series of n number

int fibbo(int n){ // this function is for n'th fibonacci number
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return(fibbo(n-1) + fibbo(n-2));
}

void print_fibbo(int n){
    for(int i=1;i<=n;i++){
        cout<<fibbo(i)<<" ";
    }
}

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    print_fibbo(n);

    return 0;
}