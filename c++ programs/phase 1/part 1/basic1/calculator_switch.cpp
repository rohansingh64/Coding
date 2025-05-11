#include<iostream>
using namespace std;
int main()
{
    int n1 , n2;
    char c;
    cout<<"enter no.s : ";
    cin>>n1>>n2;
    cout<<"enter any one operation (+,*,-,/) : ";
    cin>>c;
    switch(c)
    {
        case '+':
            cout<<"output is:"<<n1+n2;
            break;
        case '-':
            cout<<"output is:"<<n1-n2;
            break;
        case '*':
            cout<<"output is:"<<n1*n2;
            break;
        case '/':
            cout<<"output is:"<<n1/n2;
            break;
        default :
            cout<<"output is: input invalid ";
            break;
            
    }
    return 0;
}