#include<iostream>
using namespace std;
void print(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"enter n :";
    cin>>n;
    print(n);
    return 0;
}