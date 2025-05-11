#include<iostream>
using namespace std;
int subtractProductAndSum(int n)
{
    int sum =0;
    int prod =1;
    while(n!=0)
    {
        int rem = n%10;
        sum = sum + rem;
        prod = prod * rem;
        n = n/10;
    }
        return (prod-sum);
}
int main()
{
    int n;
    cout<<"enter a no:";
    cin>>n;
    cout<<"subtraction of the sum and product of digits of n : \n";
    cout<<subtractProductAndSum(n);
    return 0;
}