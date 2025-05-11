//  problem statement -->
// if you have n = 5 print 5 4 3 2 1

#include<iostream>
using namespace std;

void print(int n){

    if(n==0){
        return ;
    }
    cout<<n<<" ";
    return print(n-1);
}

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    print(n);// printing n to 1

    return 0;
}
