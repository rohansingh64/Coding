#include<iostream>
using namespace std;
int firstoccurence(int n,int a[],int key)
{
    int l = 0;
    int h = n-1;
    int ans1 = -1;
    while(l<=h)
    {   
        int m = l + (h-l)/2;
        if(a[m]==key)
        {
            ans1 = m;
            h = m-1;
        }
        else if(a[m]>key)
        {
            h = m-1;
        }
        else if(a[m]<key)
        {
            l = m+1;
        }
    }
    return ans1;
}

int laststoccurence(int n,int a[],int key)
{
    int l = 0;
    int h = n-1;
    int ans2 = -1;
    while(l<=h)
    {   
        int m = l + (h-l)/2;
        if(a[m]==key)
        {
            ans2 = m;
            l = m+1;
        }
        else if(a[m]>key)
        {
            h = m-1;
        }
        else if(a[m]<key)
        {
            l = m+1;
        }
    }
    return ans2;      
}

void totaloccurence(int n,int a[],int key)
{   
    int i1 = firstoccurence(n,a,key);
    int i2 = laststoccurence(n,a,key);
    if(i1 == -1 && i2 == -1)
    {
        cout<<"not present";
    }
    else
    {
        int t = (i2 - i1 + 1);
        cout<<"total occurence of "<<key<<" are "<<t;
    }
}

int main()
{
    int n,a[100],key;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array in sorted order"<<endl;
    cout<<"duplicates are allowed : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter key value for find total occurence :";
    cin>>key;
    totaloccurence(n,a,key);
    return 0;
}