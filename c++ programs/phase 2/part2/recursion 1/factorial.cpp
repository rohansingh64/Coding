#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans * i;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int ans = fact(n);
    cout<<"factorial of "<<n<<" is : "<<ans<<endl;

    return 0;
}