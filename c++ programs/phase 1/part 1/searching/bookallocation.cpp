#include<iostream>
using namespace std;


bool isposible(int n,int m,int arr[],int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for(int i=0;i<n;i++)
    {
        if(pagesum+arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if(studentcount>m || arr[i]>mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}



int allocatebook(int n,int m,int arr[])
{   int ans = -1;
    int l = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    int h = sum;
    while(l<=h)
    {   int mid = l + (h-l)/2;
        if(isposible(n,m,arr,mid))
        {
            ans = mid;
            h = mid-1;
        }
        else 
        {
            l = mid+1;
        }
    }
    return ans;
}



int main()
{
    int n,m,arr[100];
    cout<<"enter size of array :";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter no of students :";
    cin>>m;
    int value = allocatebook(n,m,arr);
    cout<<"the minimum value of pages allocated to maximum pages student :"<<value;
    return 0;
}