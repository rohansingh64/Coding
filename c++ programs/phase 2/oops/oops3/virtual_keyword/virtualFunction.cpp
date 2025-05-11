#include<iostream>
using namespace std;

class Base{

    public:

    void show(){
        cout<<endl<<"show base class"<<endl;
    }
    virtual void print(){
        cout<<endl<<"print base class"<<endl;
    }
};

class Derived : public Base{

    public:

    void show(){
        cout<<endl<<"show derived class"<<endl;
    }
    void print(){
        cout<<endl<<"print derived class"<<endl;
    }
};

int main(){

    
    Base *bptr;
    Derived dd;

    bptr = &dd;
    //btr-->derived-->derived print hona chahiye but nhi ho rha isliye use virtual

    bptr->show();//non virtual --> base class 
    bptr->print();//virtual fun --> derive class
    


   /*
    Base *bptr;
    Base bb;

    bptr = &bb;
    //btr--> base

    bptr->print();//base
    bptr->show();//base
    */


   /*
    Derived *dptr;
    Derived dd;

    dptr = &dd;
    //dptr--> derived

    dptr->print();//derived
    dptr->show();//derived
    */

   /*
    Derived *dptr;
    Base bb;

    dptr = &bb;  // gives error--->derived class pointer not points base class object
    */

    return 0;
}