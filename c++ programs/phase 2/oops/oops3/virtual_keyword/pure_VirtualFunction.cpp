#include<iostream>
using namespace std;

class Base{

    public:

    void show(){
        cout<<endl<<"show base class"<<endl;
    }
    // pure virtual fuction
    
    virtual void print() = 0;

    //or

    //virtual void print(){ };
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
    

    return 0;
}