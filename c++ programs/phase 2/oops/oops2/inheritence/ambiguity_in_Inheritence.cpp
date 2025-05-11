#include<iostream>
using namespace std;


class A{

    public :

    void fun1(){
        cout<<"In fun1 "<<endl;
    }

};

class B : public A{  // b have fun1

    public:

    void fun2(){
        cout<<"In fun2 "<<endl;
    }
};

class C : public A{ // c have fun1

    public:

    void fun3(){
        cout<<"In fun3 "<<endl;
    }
};

class D : public B , public C{  //d have 2 fun1  ( one is of b and one is of c) 

    public:

    void fun4(){
        cout<<"In fun4 "<<endl;
    }
};

int main(){


    D dd;  // d have 2 fun1  ( one is of b and one is of c)

    dd.B::fun1();// need to specify which one  --> using scope resolution operator

    dd.C::fun1();

    return 0;
}