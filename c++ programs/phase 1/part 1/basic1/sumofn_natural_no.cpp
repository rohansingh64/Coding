#include<iostream>
using namespace std;

int sumoffirstn(int n)
{   
    int sum =0;
    for(int i=1;i<=n;i++)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    cout<<"the sum of first "<<n<<" numbers are "<<sumoffirstn(n);
    return 0; 
}