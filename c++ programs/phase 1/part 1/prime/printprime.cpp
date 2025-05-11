#include <iostream>
using namespace std;

void printprime(int n1 , int n2){
    cout<<"prime numbers are : \n";
    for(int n=n1;n<=n2;n++){
    int count =0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        { count++;}
    }
    
    if(count < 1 && n!=1)
    {cout<<n<<",";}
}
}

int main()
{
    int n1,n2;
    cout<<"enter the numbers range:";
    cin>>n1>>n2;
    printprime(n1,n2);

    return 0;
}