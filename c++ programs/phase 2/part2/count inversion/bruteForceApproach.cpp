#include<iostream>
using namespace std;
int countInversionUsingBubbleSort(int a[],int n)
{   
    int count = 0;
    
    for(int i=0;i<n-1;i++)
    {   
        bool swapped = false;
        for(int j=0;j<n-i-1;j++)
        {   int temp;
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swapped = true;
                count++;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
    return count;
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
    int count = countInversionUsingBubbleSort(a,n);
    cout<<"sorted array : \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }cout<<endl;

    cout<<"count inversion is : "<<count<<endl;

    return 0;
}