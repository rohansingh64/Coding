#include<iostream>
using namespace std;

class A{

    public:

    int x;
    int y;

    int add(int m,int n){
        return m+n;       // using + --> addition
    }

    int operator+ (A &obj){ // using + --> multiplication

        int value1 = this->x;
        int value2 = obj.x;

        return (value1*value2);
    
    }

    void operator- (){  // using unary - operator we print hii
        cout<<"hii"<<endl;
    }
};


int main(){


    A aa;
    aa.x = 4;

    A bb;
    bb.x = 5;

    -aa;

    int ans = aa+bb;

    cout<<"addition of "<<4<<" and "<<5<<" is : "<<aa.add(4,5)<<endl;

    cout<<"multiplication of "<<aa.x<<" and "<<bb.x<<" is : "<<ans<<endl;

    return 0;
}