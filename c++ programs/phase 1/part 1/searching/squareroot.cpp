#include<iostream>
using namespace std;
  
   // in coding ninjas we use long long int because n value is from 0 to 10^9  
   

int squareroot(int n)
{   int l = 0;
    int h = n;
    int ans;
    while(l<=h)
    {   int m = l + (h-l)/2;
        int mm = m*m;
        if(mm == n)
        {
            return m;
        }
        else if(mm > n)
        {
            h = m-1;
        }
        else if(mm < n)
        {   
            ans = m;
            l = m+1;
        }
    }
    return ans;
}


int main()
{
    int n;
    cout<<"enter n :";
    cin>>n;
    int sr = squareroot(n);
    cout<<"integer part of squre root is :"<<sr;
    return 0;
}