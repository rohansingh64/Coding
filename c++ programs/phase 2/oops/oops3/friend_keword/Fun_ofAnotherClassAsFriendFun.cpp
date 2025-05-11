#include<iostream>
using namespace std;

class A; // forward declaration (needed for line 10)

class B{

    public:
    
    void func(A &obj);

};

class A{

    private:

    int x;

    public:

    void setX(int x){
        this->x = x;
    }

    friend void B :: func(A &obj);

};

void B :: func(A &obj){
    
    cout<<endl<<"value of x using function of another class as friend function : "<<obj.x<<endl;

}

int main(){


    A aa;

    aa.setX(6);

    B bb;

    bb.func(aa); // called by B object --> function of B class

    cout<<endl;
    return 0;
}