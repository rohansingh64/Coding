#include<iostream>
using namespace std;

int main(){
    int money;
    cout<<"enter money: ";
    cin>>money;
    int count;
    int i = 1;
    switch(i){

        case 1:
        count = money / 500 ;
        money = money - 500*count;
        cout<<"no of 500 notes : "<<count<<endl;

        case 2:
        count = money / 100 ;
        money = money - 100*count;
        cout<<"no of 100 notes : "<<count<<endl;

        case 3:
        count = money / 50 ;
        money = money - 50*count;
        cout<<"no of 50 notes : "<<count<<endl;

        case 4:
        count = money / 20 ;
        money = money - 20*count;
        cout<<"no of 20 notes : "<<count<<endl;

        case 5:
        count = money / 10 ;
        money = money - 10*count;
        cout<<"no of 10 notes : "<<count<<endl;

        case 6:
        count = money / 5 ;
        money = money - 5*count;
        cout<<"no of 5 coins : "<<count<<endl;

        case 7:
        count = money / 2 ;
        money = money - 2*count;
        cout<<"no of 2 coins : "<<count<<endl;

        case 8:
        count = money / 1 ;
        money = money - 1*count;
        cout<<"no of 1 coins : "<<count<<endl;
    }
    return 0;
}