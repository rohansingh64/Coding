#include<iostream>
using namespace std;
int power(int n,int p)
{
    if(p==0)
    {
        return 1;  /* this program is valid for only 0 to 2^32 -1 range*/
    }
    else
    {
        return n*power(n,p-1);
    }
}
int check(int n)
{
    int i;
    for(i=0;i<n;i++)
    {   int m = power(2,i);
        if(n==m)
        {
            return 1;
        }
    }
    return -1;
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