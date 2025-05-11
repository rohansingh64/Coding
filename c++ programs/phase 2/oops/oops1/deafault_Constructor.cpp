#include<iostream>
using namespace std;

// default constructor --> properties  --> same name as class name and no return type 
// for default constructor no input parameter
// when object is created it automatically invoked
// there is inbuild default constructor of compiler present
//but when you create your own deafalt or parameterise or copy constructor 
//it will replace inbuild default constructor

class Hero{
    
    private:
        int health;
        int power;
    public:

        Hero(){
            cout<<"default constructor called "<<endl;
            this->health = 100;
        }

        int getHealth(){
            return health;
        }
        

};

int main(){

    //statically created object
    Hero ram;//object created default constructor invoke automatically

    //dynamically created object
    Hero *ajay = new Hero;//object created default constructor invoke automatically


    cout<<"ram health : "<<ram.getHealth()<<endl;

    return 0;
}