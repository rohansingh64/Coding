#include<iostream>
using namespace std;
void checkpalindrome(int n)
{
    int sum = 0;
    int temp = n;
    while(n>0)
    {
        int rem = n % 10;
        sum = 10*sum + rem;
        n = n/10;
    }
    if(temp==sum)
    {cout<<temp<<" is a palindrome number";}
    else
    {cout<<temp<<" is not a palindrome number";}
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    checkpalindrome(n);
    return 0;
}