#include<iostream>
using namespace std;
int countdigit(int n)
{   int count =0;
    while(n>0)
    {n = n/10;
    count++;}
    return count;
}
int power(int n,int p)
{
    if(p==0)
    {                     // 370 371 153 407 9474 1634 etc  are armstrong nos.
        return 1;
    }
    else
    {
        return n*power(n,p-1);
    }
}
void checkarmstrong(int n,int p)
{   int sum =0;
    int temp = n;
    while(n>0)
    {   int m = n%10;
        sum = sum + power(m,p);
        n=n/10;  
    }
    if(temp == sum)
    {
        cout<<"yes , "<<temp<<" is an armstrong number.";
    }
    else{
        cout<<"no , "<<temp<<" is not an armstrong number.";
    }
}
int main()
{
    int n,p;
    cout<<"Enter a number : ";
    cin>>n;
    p = countdigit(n);
    checkarmstrong(n,p);
    return 0;
}