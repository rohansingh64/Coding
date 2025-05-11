#include<iostream>
using namespace std;

void printarray(int n,int a[])
{
    cout<<"all elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
}


void swap_alternate(int n,int a[])
{   
    int i=0;
    while(i<=n-2)
    {
        int temp;
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
        i = i+2;
    }
}


int main()
{
    int i,n,a[100];
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter all elements : ";
    for(i=0;i<n;i++)
    {
        cin>> a[i];
    }
    printarray(n,a);
    cout<<endl;
    swap_alternate(n,a);
    cout<<"After swapping alternate elements : ";
    printarray(n,a);
    cout<<endl;
    return 0;
}