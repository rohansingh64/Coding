#include<iostream>
using namespace std;
int decimal(int n)
{   int sum = 0;
    int base = 1;
    while(n>0)
    {
     int rem = n%10;
     sum = sum + rem*base;
     n = n/10;
     base = base*2;
    }
    return sum;
}
int main()
{   int n;
    cout<<"Enter binary no : ";
    cin>>n;
    cout<<"decimal : "<<decimal(n);
    return 0;
}