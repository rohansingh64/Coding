#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int x)
{
    if(n==0){
        return -1;
    }
    if(arr[n-1] == x){
        return n-1;
    }
    return linear_search(arr,n-1,x);

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
    int x;
    cout<<"enter x : ";
    cin>>x;
    int ans = linear_search(arr,n,x);
    if(ans != -1)
    {
        cout<<"element is present at index : "<<ans<<endl;
    }
    else
    {
        cout<<"element is not present";
    }

    return 0;
}