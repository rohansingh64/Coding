#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{   for(int i=0;i<n-1;i++)
    {   
        bool swapped = false;
        for(int j=0;j<n-i-1;j++)
        {   
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
}
int main()
{
    int n,a[100],i;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter elements of array :";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"unsorted array : \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<"\n";
    bubblesort(a,n);
    cout<<"sorted array : \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}