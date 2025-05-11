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

void reverse(int n,int a[],int m)
{   
    int i=m+1;
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
    int i,n,m,a[100];
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter all elements : ";
    for(i=0;i<n;i++)
    {
        cin>> a[i];
    }
    printarray(n,a);
    cout<<endl;
    // m is the index value 
    // array is reverse after m index
    // till m index array is same
    cout<<"enter index value m:";
    cin>>m;
    reverse(n,a,m);
    cout<<"reverse array(perform reverse after index "<<m<<" ): ";
    printarray(n,a);
    cout<<endl;
    return 0;
}