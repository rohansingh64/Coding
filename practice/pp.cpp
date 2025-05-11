#include<iostream>
using namespace std;

bool checkPrime(int n){

    if(n == 1){
        return false;
    }

    for(int i = 2;i < n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


bool checkSumPrime(int n){

    for(int x = 2;x < n;x++){
        if(checkPrime(x) && checkPrime(n-x)){
            return true;
        }
    }
    return false;
}



int main(){

    int n;

    cout<<"enter a prime no : ";
    cin>>n;

    if(checkSumPrime(n)){
        cout<<endl<<n<<" is rep using sum of 2 prime numbers";
    }
    else{
        cout<<endl<<n<<" is not rep using sum of 2 prime numbers";
    }


    return 0;
}