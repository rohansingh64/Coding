#include<iostream>
using namespace std;

class A {

    public:

    void print(){
        cout<<"class A"<<endl;
    }

};

class B : public A{

    public:

    void print(){
        cout<<"class B"<<endl;
    }

};

int main(){

    B bb;

    bb.print();

    return 0;
}