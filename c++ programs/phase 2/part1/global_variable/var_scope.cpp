#include<iostream>
using namespace std;

//scope of variables

int main(){

    int i = 5;

    cout<<"i value outside block : "<<i<<endl;

    {
        int i = 10;
        cout<<"i value inside block : "<<i<<endl;//local var to this block only
    }

    cout<<"i value outside : "<<i<<endl;


    return 0;
}