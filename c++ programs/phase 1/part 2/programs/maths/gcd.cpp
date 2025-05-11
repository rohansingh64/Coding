#include<iostream>
using namespace std;

// this algorithm is known as Euclidiean Algorithm

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a>b){
        return gcd(a-b,b);
    }
    if(b>a){
        return gcd(a,b-a);
    }
}

int main(){
    int a = 18;
    int b = 12;

    int ans = gcd(a,b);
    cout<<ans;
    return 0;
}