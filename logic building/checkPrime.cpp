#include<iostream>
using namespace std;

bool checkPrime(int n){

        for(int i=2;i<n;i++){
            if(n%i == 0){
                return 0;
            }
        }
        return 1;
}

int main(){

    int n;

    cout<<"enter number : ";

    cin>>n;

    if(n == 1){
        cout<<n<<" is niether prime nor composite number.";
    }
    else{
        bool b = checkPrime(n);
        if(b){
            cout<<n<<" is a prime number.";
        }
        else{
            cout<<n<<" is a composite number.";
        }
    }
    
    return 0;
}