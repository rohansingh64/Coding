#include<iostream>
using namespace std;

int check(int n)
{
    int count = 0;
    if(n<=0)
    { return -1;}
    while(n)
    {
        if(n&1)
        {
            count++;
        }
        n = n>>1;
    }
    return count;
}


int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int c = check(n);
    if(c==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}