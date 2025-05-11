#include<iostream>
using namespace std;
int fact(int n)       //without recursion
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int ncr(int n,int r)
{
    return ((fact(n))/((fact(r)*fact(n-r))));
}
int main()
{
    int n,r;
    cout<<"enter value of n and r : ";
    cin>>n>>r;
    cout<<"ncr value is : "<<ncr(n,r);
    return 0;
}