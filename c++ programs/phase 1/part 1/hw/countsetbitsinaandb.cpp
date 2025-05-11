#include<iostream>
using namespace std;
int count(int n)
{   int count = 0;
    while(n)
    {
        if(n&1)
        {
            count++;
        }
        n = n>>1;
    }
    return count;   
}
int main()
{
    int a,b;
    cout<<"enter value of a and b :";
    cin>>a >>b;
    int c = count(a)+count(b);
    cout<<"the total no of set bits in a and b : "<<c;
    return 0;
}
