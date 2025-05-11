#include<iostream>
using namespace std;
void checkprime(int n)
{
    int count = 0;
    for(int i=2;i<n;i++)
    {
        if(n % i == 0)
        {count++;}
    }

    if(count<1 && n!=1)
    {cout<<n<<" is a prime number";}
    else
    {cout<<n<<" is a non prime number";}
}
int main()
{
    int n;
    cout<<"enter a +ve number : ";
    cin>>n;
    checkprime(n);
    return 0;
}