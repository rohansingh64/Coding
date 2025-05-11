#include<iostream>
using namespace std;

/* n th fibonacci number without using recursion */

int fibbo(int n)
{
    int n1 = 0;
    int n2 = 1;
    int n3;
    if(n==1)
    { return n1;}
    if(n==2)
    { return n2;}
    for(int i=1;i<=n-2;i++)
    {
        n3 = n2+n1;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}
int main()
{
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    cout<<n<<"th fibonacci number is : "<<fibbo(n);
    return 0;
}