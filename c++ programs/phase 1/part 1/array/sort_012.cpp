#include<iostream>
using namespace std;

void sort_012(int n,int a[])
{
    int i = 0;
    int j = 0;
    int k = n-1;
    while(j<=k)
    {   if(a[j]==0)
        {  
            swap(a[i],a[j]);
            i++;
            j++;
        }
        else if(a[j]==1)
        {  
            j++;
        }
        else if(a[j]==2)
        {  
            swap(a[j],a[k]);
            k--;
        }

    }
}


int main()
{
    int n;
    int a[10];
    
    cout<<"enter value of n:";
    cin>>n;
    cout<<"enter elements of a 0 or 1 or 2 only :";
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
    sort_012(n,a);
    cout<<"elements of a after sort :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}