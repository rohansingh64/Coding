#include<iostream>
using namespace std;

int check_prime(int n){
    if(n==1){
        return -1;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return -1;
            }
        }
        return 1;
    }
}

int main(){
    int n;
    cout<<"enter a +ve number : ";
    cin>>n;
    if(check_prime(n)==-1){
        cout<<n<<" is not a prime no.";
    }
    if(check_prime(n)==1){
        cout<<n<<" is a prime no.";
    }
    return 0;
}