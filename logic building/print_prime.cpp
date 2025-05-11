#include<iostream>
using namespace std;

void print_prime(int n1, int n2){
    for(int n=n1;n<=n2;n++){
        int count=0;
        if(n==1){
        count+=1;
        }
        else{
            for(int i=2;i<n;i++){
                if(n%i==0){
                    count+=1;
                }
            }
        }
        if(count==0){
            cout<<n<<" ";
        }
    }
}

int main(){
    int n1 , n2;
    cout<<"enter range of no.s : ";
    cin>>n1;
    cin>>n2;
    cout<<"prime no.s from "<<n1<<" to "<<n2<<" are : ";
    print_prime(n1,n2);
    return 0;
}