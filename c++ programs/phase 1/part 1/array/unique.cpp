#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;
    for(int i=0;i<size;i++)
    {
        ans = (ans^arr[i]);
    }
    return ans;
}
int main()
{
    int i,n,a[100];
    cout<<"enter size of numbers(2M+1)(M times twice no. and 1 time 1no.) : ";
    cin>>n;
    cout<<"enter all numbers : ";
    for(i=0;i<n;i++)
    {
        cin>> a[i];
    }
    cout<<"all numbers are : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
    int ans = findUnique(a,n);
    cout<<"Unique no is :"<<ans;

    return 0;
}