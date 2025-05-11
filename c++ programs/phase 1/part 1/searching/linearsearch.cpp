#include<iostream>
using namespace std;
int linearsearch(int a[],int n,int s)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[10],n,i,s;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the elements of array are : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<", ";
    }
    cout<<"\n";
    cout<<"Enter the element you want to search : ";
    cin>>s;
    cout<<s<<" is found at the index number "<<linearsearch(a,n,s);
    return 0;
}