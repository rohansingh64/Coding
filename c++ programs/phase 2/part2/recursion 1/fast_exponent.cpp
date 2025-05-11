#include<iostream>
using namespace std;

int power(int n,int p){
    if(p==0){
        return 1;
    }
    int  ans = (power(n,p/2));
    if(p&1){
        return ans * ans * n;
    }
    else{
        return ans * ans;
    }
}

int main(){
    int n , p;
    cout<<"enter n and p values : ";
    cin>>n>>p;

    int ans = power(n,p);

    cout<<n<<" ^ "<<p<<" is : "<<ans;

    return 0;
}