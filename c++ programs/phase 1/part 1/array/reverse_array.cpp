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

void reverse(int n,int a[])
{   
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
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
    reverse(n,a);
    cout<<"After reverse : ";
    printarray(n,a);
    cout<<endl;
    return 0;
}