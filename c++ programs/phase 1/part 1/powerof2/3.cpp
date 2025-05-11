#include<iostream>
using namespace std;

int check(int n)
{
    if(n<=0)
    { return -1;}
    return ((n&(n-1)));
}


int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<< n << " is power of 2 or not ? , answer is ";
    int c = check(n);
    if(c==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}