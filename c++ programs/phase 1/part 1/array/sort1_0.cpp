#include<iostream>
using namespace std;

void sort_01(int n,int a[])
{
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(a[i]==0)
        {
            i++;
        }
        else if(a[j]==1)
        {
            j--;
        }
        else if(a[i]==1 && a[j]==0)
        {  
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
}


int main()
{
    int n;
    int a[10];
    
    cout<<"enter value of n:";
    cin>>n;
    cout<<"enter elements of a 0 or 1 only :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"elements of a before sort :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort_01(n,a);
    cout<<"elements of a after sort :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}