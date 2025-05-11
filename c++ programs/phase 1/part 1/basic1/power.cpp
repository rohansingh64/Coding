#include<iostream>
using namespace std;

/* here we discuss all the cases like ---> +ve number +ve power and 
                                           +ve number 0 power and
                                           +ve number -ve power 
                                           and for all cases with -ve number */
float power(int n , int p)
{
    float temp=1;
    if(p>=0)
    {
    for(int i=1;i<=p;i++)
    {
        temp = temp*n;
    }
    return temp;
    }
    else
    {
        p = -p;
        for(int i=1;i<=p;i++)
    {
        temp = temp*n;
    }
    return 1/temp;
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