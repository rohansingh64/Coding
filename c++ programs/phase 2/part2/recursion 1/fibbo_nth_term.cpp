#include<iostream>
using namespace std;

// without recursion

int fibonnacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        int t1 = 0;
        int t2 = 1;
        int t3;
        for(int i=3;i<=n;i++){
            t3 = t2 + t1;
            t1 = t2;
            t2 = t3;
        }
        return t3;
    }
}

// this recursive function is for n'th fibonacci number

int fibbo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return(fibbo(n-1) + fibbo(n-2));
}


int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    cout<<n<<" th fibonnacci number without recursion --> "<<fibonnacci(n)<<endl;
    cout<<n<<" th fibonnacci number by recursion --> "<<fibbo(n)<<endl;

    return 0;
}