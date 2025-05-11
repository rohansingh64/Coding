#include<iostream>
using namespace std;

int comp(int n){
    int m = n;
    int mask = 0;
    while(m){
        mask = mask << 1 ;
        mask = mask | 1 ;
        m = m >> 1 ;
    }
    n = (~(n))&(mask);
    return n;
}

int main(){
    int n;
    cout<<"enter no:";
    cin>>n;
    cout<<"complement of base 10 of "<<n<<" is "<<comp(n);
    return 0;
}