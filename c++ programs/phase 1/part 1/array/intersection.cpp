#include<iostream>
using namespace std;

void intersection(int a[],int n,int b[],int m)
{   int i=0;
    int j=0;
    while(((i<n)&&(j<m)))
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else   // (a[i]==b[j])
        {   cout<<a[i]<<" ";
            i++;
            j++;
        }

    }
}
int main()
{
    int n,m;
    int a[100];
    int b[100];
    cout<<"enter value of n and m:";
    cin>>n>>m;
    cout<<"enter elements of a in non decreasing order:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter elements of b in non decreasing order:";
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    cout<<"intersection elements in preserve order : ";
    intersection(a,n,b,m);
    return 0;

}