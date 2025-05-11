#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,p;
    cout<<"Enter value of number and power : ";
    cin>>n>>p;
    float m = pow(n,p);
    cout<<"the value of "<<n<<"^"<<p<<" is "<<m;
    return 0;
}