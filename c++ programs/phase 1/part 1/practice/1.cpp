#include<iostream>
using namespace std;
int main()
{
    int s = 1;
    int n;
    int count;
    cout<<"enter money :";
    cin>>n;
    switch(s)
    {
        case 1:
            count = n/100;
            n = n-(100*count);
            cout<<"no of 100s notes : "<<count<<endl;
        case 2:
            count = n/50;
            n = n-(50*count);
            cout<<"no of 50s notes : "<<count<<endl;
        case 3:
            count = n/20;
            n = n-(20*count);
            cout<<"no of 20s notes : "<<count<<endl;
        case 4:
            count = n/10;
            n = n-(10*count);
            cout<<"no of 10s notes : "<<count<<endl;
        case 5:
            count = n/1;
            n = n-(1*count);
            cout<<"no of 1s coins : "<<count<<endl;
    }

}