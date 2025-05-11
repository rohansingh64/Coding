#include<iostream>
#include<limits.h>
using namespace std;

int maximum(int n,int a[])
{   int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    return max;
}
int minimum(int n,int a[])
{   int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    return min;
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
    int largest = maximum(n,a);
    int smallest = minimum(n,a);
    cout<<"maximum number is : "<<largest<<endl;
    cout<<"minimum number is : "<<smallest<<endl;

    return 0;
}