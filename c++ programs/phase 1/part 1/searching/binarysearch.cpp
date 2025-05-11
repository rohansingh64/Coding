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

int binarysearch(int n , int a[] , int x)
{
    int l = 0;
    int h = n-1;
    while(l<=h)
    {   // int m = (l+h)/2; (if you use this for high value of l,h it goes outside to int size)

        int m = (l + (h-l)/2);
        if(a[m]>x)
        {
            h = m-1;
        }
        else if(a[m]<x)
        {
            l = m+1;
        }
        else if(a[m]==x)
        {
            return m;        }
    }
    return -1;
}

int main()
{
    int n,a[100],x;
    cout<<"enter size of array :";
    cin>>n;
    cout<<"enter elements of array in sorted order :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    print(n,a);
    cout<<"enter element you wanted to search : ";
    cin>>x;
    int index = binarysearch(n,a,x);
    if(index == -1)
    {
        cout<<x<<" is not present in array";

    }
    else
    {
        cout<<x<<" is found at index :"<<index;

    }
    return 0;
}