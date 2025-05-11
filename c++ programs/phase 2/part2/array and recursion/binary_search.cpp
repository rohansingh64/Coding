#include<iostream>
using namespace std;
int binary_search(int arr[],int l,int h,int x)
{   int m = (l+h)/2;
    if(l>h){
        return -1;
    }
    if(arr[m] == x){
        return m;
    }
    if(arr[m] > x){
        return binary_search(arr,l,m-1,x);
    }
    if(arr[m] < x){
        return binary_search(arr,m+1,h,x);
    }

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
    int ans = binary_search(arr,0,n-1,x);
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