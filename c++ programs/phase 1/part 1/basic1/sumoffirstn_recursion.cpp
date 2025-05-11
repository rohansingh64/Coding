#include<iostream>
using namespace std;
int sum(int n)
{   
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n + sum(n-1);
    }
}
int main()
{
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    cout<<"the sum of first "<<n<<" numbers are "<<sum(n);
    return 0; 
}