#include<iostream>
using namespace std;

int find_pivot(int n,int a[])
{   int l=0;
    int h=n-1;
    while(l<h)
    {
        int m = l + (h-l)/2;
        //  mid is at first line go to further
        if(a[m]>=a[0])
        {
            l = m+1;
        }
        // mid is at second line go left part
        else 
        {
            h = m;  // here we not use h=m-1 because 
                    // if mid is at extreame lower point at 2nd line then 
                    // it goes to 1st line after subtract 1
        }
    }
    return l;
}
int binarysearch(int l,int h,int k,int a[])
{   while(l<=h)
    {
        int mid = l + (h-l)/2;
        if(a[mid]==k)
        {
            return mid;
        }
        else if(a[mid]>k)
        {
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}

int search(int n,int a[],int k)
{   
    int p = find_pivot(n,a);
    int ans;
    if((k>=a[p]&&(k<=a[n-1])))  // means searching element is on 2nd line
    {
         ans = binarysearch(p,n-1,k,a);
    }
    else   // means searching element is on 1st line
    {
         ans = binarysearch(0,p-1,k,a);
    }
    return ans;
}



int main()
{
    int n,a[100],i,k;
    cout<<"enter size of array :";
    cin>>n;
    cout<<"enter array elements in form of sorted and rotated:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter value to search :";
    cin>>k;
    int index = search(n,a,k);
    cout<<"index of "<<k<<" is "<<index;
    return 0;
}