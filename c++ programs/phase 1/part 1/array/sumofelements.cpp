#include<iostream>
using namespace std;

void print(int n,int a[])
{
    cout<<"elements of array :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void add(int n , int a[])
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    cout<<"sum of array elements is :"<<sum<<endl;
}

int main()
{
    int n,a[100];
    cout<<"enter size of array :";
    cin>>n;
    cout<<"enter elements of array :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    print(n,a);
    add(n,a);
    

    return 0;
}