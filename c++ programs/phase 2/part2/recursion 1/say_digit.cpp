#include<iostream>
using namespace std;

// i/p --> 412
// o/p --> four one two



void say_digit(int n){
    if(n==0){
        return ;
    }
    say_digit(n/10);
    // string print[10] = {}; or
    char print[10][6] = {"zero","one","two","three","four",
    "five","six","seven","eight","nine"};
    cout<<print[n%10]<<" ";
}

// we can create a string type array using string or 2-D char array

int main(){

    int n;
    cout<<"enter n : ";
    cin>>n;

    say_digit(n);

    return 0;
}