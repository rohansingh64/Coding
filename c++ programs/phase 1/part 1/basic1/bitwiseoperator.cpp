#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a and b values :";
    cin>>a>>b;
    cout<<" a&b value : "<<(a&b)<<endl; // bitwise AND
    cout<<" a|b value : "<<(a|b)<<endl; // bitwise OR
    cout<<" ~a value : "<<(~a)<<endl;   // bitwise NOT
    cout<<" a^b value : "<<(a^b)<<endl; // bitwise XOR
    cout<<"5<<1 value :"<<(5<<1)<<endl; // left shift
    cout<<"3<<2 value :"<<(3<<2)<<endl; // left shift
    cout<<"15>>1 value :"<<(15>>1)<<endl; // right shift
    cout<<"5>>2 value :"<<(5>>2)<<endl; // right shift
    return 0;
}