#include<iostream>
using namespace std;
bool check(int a[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
        {
            return false;
        }
    }
    return true;
    
}
int main()
{
    int n,a[100],i;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Elements of array are : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" , ";
    }
    cout<<"\n";
    
    if(check(a,n))
    {
        cout<<"array is sorted";
    }
    else
    {
        cout<<"array is not sorted";
    }
    return 0;
}