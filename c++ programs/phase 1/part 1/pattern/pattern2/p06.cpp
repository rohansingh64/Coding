#include<iostream>
using namespace std;
void print(int n)
{   int a = 1;
    for(int i=1;i<=n;i++)
    {   for(int j=1;j<=i;j++)
        {
            cout<<char('A'+a-1)<<" ";
            a++;
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"enter n :";
    cin>>n;
    print(n);
    return 0;
}