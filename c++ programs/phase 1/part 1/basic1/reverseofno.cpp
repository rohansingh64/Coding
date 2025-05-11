#include<iostream>
#include<limits.h>
using namespace std;
/* same concept as sum of digits 
but one difference i.e when you do sum 
then first multiply with 10 
see line no. 19 */
int reverse(int n)
{
    int rem;
    int sum =0;
    while(n>0)
    {
        rem = n % 10;
        if(sum > INT_MAX/10 || sum < INT_MIN)
        {
            return -1;
        }
        sum = 10*sum + rem;
        n = n / 10;
    }
  return sum;
}
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(reverse(n)==-1)
    {
        cout<<"the reverse of "<<n<<" is out of range integer limits";
    }
    cout<<"the reverse of "<<n<<" is "<<reverse(n);
    return 0;
}