#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{   for(int i=1;i<n;i++)
    {   
        int temp = a[i];
        int j = i-1;
        while(j>=0)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
                j--;
            }
            else
            {
                break;
            }
        }
        a[j+1] = temp;
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
    insertionsort(a,n);
    cout<<"sorted array : \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}