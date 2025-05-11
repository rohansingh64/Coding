#include<iostream>
using namespace std;

void selectionsort(int n,int a[])
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        int j = i+1;
        while(j<n)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
            j++;
        }
        swap(a[min],a[i]);
    }
}

int main()
{
    int n , a[100];
    cout<<"enter size of array :";
    cin>>n;
    cout<<"enter elements of array :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selectionsort(n,a);
    cout<<"elements of array after sorting :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}