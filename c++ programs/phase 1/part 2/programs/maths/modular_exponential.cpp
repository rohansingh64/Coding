#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	if(n==0){
		return 1;
	}
    else{
        long long ans = (modularExponentiation(x,n/2,m))%m;
        if(n&1){//n&1 is true then n is odd if false then even
            return ((ans*ans)%m*x)%m;
        }
        else{
            return (ans*ans)%m;
        }
    }
}

int main(){
    int x,n,m;// x is base n is power m is moduler 
              // you have to return (x)^n % m  

    cout<<"enter x n m values --> ";
    cin>>x;
    cin>>n;
    cin>>m;

    int ans = modularExponentiation(x,n,m);
    cout<<"answer -->  "<<ans;
    return 0;
}