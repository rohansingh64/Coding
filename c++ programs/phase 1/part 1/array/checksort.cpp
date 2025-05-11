#include<iostream>
using namespace std;
int checksort(int n, int a[])
{
    int i =0;
    while(i<=n-2)
    {
        if(a[i]>a[i+1])
        {
            return -1;
        }
        i = i+1;
    }
    return 1;
}

int main()
{
    int i,n,a[100];
    cout<<"enter size of numbers : ";
    cin>>n;
    cout<<"enter all numbers : ";
    for(i=0;i<n;i++)
    {
        cin>> a[i];
    }
    cout<<"all numbers are : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
    int ans = checksort(n,a);
    if(ans == -1)
    {
        cout<<"array is not sorted.";
    }
    if(ans == 1)
    {
        cout<<"array is sorted.";
    }

    return 0;
}