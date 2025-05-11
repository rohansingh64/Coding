#include<iostream>
using namespace std;

void check_palindrome(int n){
    int temp = n;
    int d,r=0;
    while(n){
        d = n%10;
        r = 10*r + d;
        n = n/10; 
    }
    cout<<"reverse no is : "<<r<<endl;
    if(r==temp){
        cout<<temp<<" is a palindrome no.";
    }
    else{
        cout<<temp<<" is not a palindrome no.";
    }

}

int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    check_palindrome(n);
    return 0;
}