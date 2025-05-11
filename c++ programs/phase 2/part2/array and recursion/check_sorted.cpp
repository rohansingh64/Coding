#include<iostream>
using namespace std;
bool checksort(int arr[],int n)
{
    if(n==1 || n==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return checksort(arr+1,n-1);

}

int main()
{
    int i,n,arr[100];
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter all elements : ";
    for(i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    cout<<"array : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    bool ans = checksort(arr,n);
    if(ans)
    {
        cout<<"array is sorted.";
    }
    else
    {
        cout<<"array is not sorted.";
    }

    return 0;
}