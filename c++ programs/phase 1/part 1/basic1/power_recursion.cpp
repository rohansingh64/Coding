#include<iostream>
using namespace std;
int power(int n , int p)
{
    if(p==1)
    {return n;}
    else if(p==0)
    {return 1;}
    else
    {
        return n*power(n,p-1);
    }
}
int main()
{
    int n,p;
    cout<<"enter the value of number and power : ";
    cin>>n>>p;
    cout<<"the value of "<<n<<"^^"<<p<<" is "<<power(n,p);
    return 0;
}