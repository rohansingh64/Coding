#include<iostream>
using namespace std;
void count_notes(int amount)
{   int n =1,count =0;
    switch(n)
    {
        case 1: count = amount/100;
                amount = amount - 100*count;
                cout<<"number of 100 notes are : "<<count<<endl;
        case 2: count = amount/50;
                amount = amount - 50*count;
                cout<<"number of 50 notes are : "<<count<<endl;
        case 3: count = amount/20;
                amount = amount - 20*count;
                cout<<"number of 20 notes are : "<<count<<endl;
        case 4: count = amount/10;
                amount = amount - 10*count;
                cout<<"number of 10 notes are : "<<count<<endl;
        case 5: count = amount/1;
                amount = amount - 1*count;
                cout<<"number of 1 coins are : "<<count<<endl;
    }
}
int main()
{
    int amount ;
    cout<<"enter amount : ";
    cin>>amount;
    count_notes(amount);
    return 0;
}