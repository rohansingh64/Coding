#include<iostream>
using namespace std;
int main()
{
    int a,b;           // using + and -
    cout<<"Enter the value of a and b :";
    cin>>a>>b;
    cout<<"The value of a and b before swap :"<<a<<" and "<<b<<endl;
    a = a+b; // a=5+10=15 and b=10
    b = a-b; // a=15 and b=15-10=5
    a = a-b; // a=15-5=10 and b=5
    cout<<"The value of a and b after swap :"<<a<<" and "<<b<<endl;

    int m,n;   //using * and /
    cout<<"Enter the value of m and n :";
    cin>>m>>n;
    cout<<"The value of m and n before swap :"<<m<<" and "<<n<<endl;
    m = m*n; // m=5*10=50 and n=10
    n = m/n; // m=50 and n=50/10=5
    m = m/n; // m=50/5=10 and n=5
    cout<<"The value of m and n after swap :"<<m<<" and "<<n<<endl;

    return 0;
}