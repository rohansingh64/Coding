#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    cout<<"elements of array :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sumArrayElement(int arr[],int n)
{
    if(n==0){
        return 0;
    }
   // return (arr[n-1] + sumArrayElement(arr,n-1));
   // or
   return (arr[0] + sumArrayElement(arr+1,n-1));
}

int main()
{
    int n,arr[100];
    cout<<"enter size of array :";
    cin>>n;
    cout<<"enter elements of array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    print(arr,n);
    int sum = sumArrayElement(arr,n);
    cout<<"sum is : "<<sum<<endl;

    return 0;
}