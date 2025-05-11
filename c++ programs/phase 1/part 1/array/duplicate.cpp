#include<iostream>
using namespace std;

int findDuplicate(int array[], int size)
{
    int ans=0;
    for(int i=1;i<size;i++)
    {
        ans = (ans^i);
    }
    for(int i=0;i<size;i++)
    {
        ans = (ans^(array[i]));
    }

    return ans;
}
int main()
{
    int i,n,a[100];
    cout<<"enter size of numbers (N : 1 to n-1 no.s 1 time any one no. one extra time ) : ";
    /*     like for size 6 -> 1 2 4 5 3 2   and for size 7 -> 4 3 5 5 2 6 1 */

    cin>>n;
    cout<<"enter all numbers : ";
    for(i=0;i<n;i++)
    {
        cin>> a[i];
    }
    cout<<"all numbers are : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
    int ans = findDuplicate(a,n);
    cout<<"Duplicate no is :"<<ans;

    return 0;
}