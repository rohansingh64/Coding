#include<iostream>
using namespace std;



class A{

    public:

    int add(int a,int b,int c){
        return a+b+c;
    }

    int add(int a,int b){
        return a+b;
    }
    double add(double a,double b){
        return a+b;
    }
    /*
    void add(int a,int b){// gives error not overload by only change return type
        cout<<a+b;
    }
    */

};



int main(){

    A aa;

    cout<<"sum of "<<2<<" and "<<3<<" is : "<<aa.add(2,3)<<endl;

    cout<<"sum of "<<2.8<<" and "<<3.6<<" is : "<<aa.add(2.8,3.6)<<endl;

    cout<<"sum of "<<2<<" ,"<<3<<" and "<<7<<" is : "<<aa.add(2,3,7)<<endl;


    return 0;
}