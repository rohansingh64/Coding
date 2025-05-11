#include<iostream>
using namespace std;

//pass by value function

void update1(int n){
    n++;
}

//pass by reference function

void update2(int &m){
    m++;
}

int main(){

    int n = 5;

    cout<<"before update1 n = "<<n<<endl;
    update1(n);
    cout<<"after update1 n = "<<n<<endl;

    int m = 10;
    cout<<"before update1 m = "<<m<<endl;
    update2(m);
    cout<<"after update1 m = "<<m<<endl;

    return 0;
}