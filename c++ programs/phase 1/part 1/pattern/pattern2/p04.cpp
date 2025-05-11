#include<iostream>
using namespace std;
void show(int n)
{   int a=1;
    for(int i=1;i<=n;i++)
    {   a = i;
        for(int j=1;j<=n;j++)
        {
            cout<<char('A'+a-1)<<" ";
            a++;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter no of rows :";
    cin>>n;
    show(n);
    return 0;
}