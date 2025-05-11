#include<iostream>
using namespace std;
void decimal_to_binary(int n)
{
    int a[100];
    int i=1;
    while(n)
    {
        a[i] = n%2;
        n = n/2;
        i++;
    }
    for(i = i-1;i>=1;i--)
    {
        cout<<a[i];
    }
}
/*
    using vector

    void decimalToBinary(int n){

    vector<int> v;
    while(n){
        v.push_back(n&1);
        n = n >> 1; // or n = n/2
    }
    reverse(v.begin(),v.end());
    for(auto i:v){
        cout<<i;
    }cout<<endl;
}

*/
int main()
{
    int n;
    cout<<"enter n :";
    cin>>n;
    cout<<"binary :";
    decimal_to_binary(n);
    return 0;
}