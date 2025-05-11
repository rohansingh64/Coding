#include<iostream>
using namespace std;


class A{

    private:

    int x;

    public:

    void setX(int x){
        this->x = x;
    }

    friend class B;

};

class B{

    public:
    
    void func(A &obj){
    
        cout<<endl<<"value of x using friend class : "<<obj.x<<endl;

    }   

};


int main(){


    A aa;

    aa.setX(6);

    B bb;

    bb.func(aa); // called by B object --> function of B class

    cout<<endl;
    return 0;
}