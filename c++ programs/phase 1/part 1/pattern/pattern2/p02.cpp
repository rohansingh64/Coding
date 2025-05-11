#include<iostream>
using namespace std;
void show(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<char('A'+j-1)<<" ";
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