#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"the fibbonaci series  of "<<n<<"  terms are ";
    cout<<"0  1 ";
    int n1 = 0;
    int n2 = 1;
    int n3;
    for(int i=2;i<n;i++)
    {
        n3 = n1 + n2;
        cout<<" "<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}