#include<iostream>
using namespace std;

int count_set_bits(int n){
    int count = 0;
    while(n){
        if(n&1){
            count++;
            n = n >> 1;
        }
        else{
            n = n >> 1;
        }
    }
    return count;

}

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"no of set bits are : "<<count_set_bits(n);
    return 0;
}