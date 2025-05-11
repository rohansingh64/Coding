#include<iostream>
using namespace std;

class A{

    private:

    int x;

    public:

    void setX(int x){
        this->x = x;
    }

    friend void func(A &obj);

};

void func(A &obj){
    
    cout<<endl<<"value of x using friend function : "<<obj.x<<endl;

}

int main(){


    A aa;

    aa.setX(6);

    func(aa); // called as normal fuction --> not function of any class

    cout<<endl;
    return 0;
}