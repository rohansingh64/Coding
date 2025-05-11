#include<iostream>
using namespace std;
int fibbo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {   return fibbo(n-1) + fibbo(n-2); }
}
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"the fibbonaci series  of "<<n<<"  terms are ";
    for(int i=0;i<n;i++)
    {
        cout<<fibbo(i)<<"   ";
    }
    return 0;
}