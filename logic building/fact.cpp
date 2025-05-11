#include<iostream>
using namespace std;

int fact_recursion(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact_recursion(n-1);
    }
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"enter a no:";
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<fact_recursion(n);
    cout<<endl;
    cout<<"factorial of "<<n<<" is "<<factorial(n);
    return 0;
}