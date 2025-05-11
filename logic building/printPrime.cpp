#include<iostream>
using namespace std;

bool checkPrime(int n){

    if(n == 1) return 0;

    for(int i=2;i<n;i++){
        if(n%i == 0) return 0;
    }

    return 1;

}

int main(){

    int n1 , n2;

    cout<<"enter n1 and n2 : ";
    cin>>n1>>n2;

    cout<<"prime number from "<<n1<<" to "<<n2<<" : "<<endl;

    for(int n=n1;n<=n2;n++){
        if(checkPrime(n)){
            cout<<" "<<n<<" ";
        }
    }


    return 0;
}