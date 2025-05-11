#include<iostream>
using namespace std;

int power(int a,int n){
    if(n==0){
        return 1;
    }
    return (a*power(a,n-1));
}

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    int ans = power(2,n);

    cout<<"2^"<<n<<" is --> "<<ans<<endl;

    return 0;
}