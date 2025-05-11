#include<iostream>
using namespace std;
int sumofdigits(int n)
{
    int rem;
    int sum =0;
    while(n>0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
  return sum;
}
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"the sum of digits of "<<n<<" is "<<sumofdigits(n);
    return 0;
}