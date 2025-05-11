#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void pairsum(int a[],int n,int sum)
{   sort(a,a+n);
   // we want all answers also print in sorted
    for(int i=0;i<=n-2;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {   int s = a[i]+a[j];
            if(sum == s)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
                // we want that first smaller print then greater print
            }
        }
    }
}

int main()
{
    int n,sum;
    int a[100];
    
    cout<<"enter value of n:";
    cin>>n;
    cout<<"enter elements of a :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter value of sum:";
    cin>>sum;
    cout<<"pairs in increasing or equal order : "<<endl;
    pairsum(a,n,sum);
    return 0;

}