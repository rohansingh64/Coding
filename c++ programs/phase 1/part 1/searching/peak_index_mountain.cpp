#include<iostream>
using namespace std;
// given atleast 3 element in array
/*  
----------linear search approach----------

int peak_index(int n,int a[])
{
    int i = 1;
    while(i<n)
    {
        if((a[i]>a[i-1])&&(a[i]>a[i+1]))
        {
            return i;
        }
        i++;
    }
}

*/


int peak_index(int n,int a[])
{
    int l = 1;
    int h = n-2;
    while(l<=h)
    {   
        int m = l + (h-l)/2;
        if((a[m]>a[m-1])&&(a[m]>a[m+1]))
        {
            return m;
        }
        else if((a[m]>a[m-1])&&(a[m]<a[m+1]))
        {
            l = m+1;
        }
        else if((a[m]<a[m-1])&&(a[m]>a[m+1]))
        {
            h = m-1;
        }
    }
}

int main()
{
    int n,a[100];
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array in form of mountain :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pi = peak_index(n,a);
    cout<<"peak index is : "<<pi;
    return 0;
}