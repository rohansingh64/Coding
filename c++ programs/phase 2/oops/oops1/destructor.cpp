#include<iostream>
using namespace std;

//inbuild compire destuctor is already present but after
// your destuctor replace inbuild compire destuctor

class Hero{
    
    private:
        int health;
        int power;
    public:

        ~Hero(){
            cout<<"destructor called "<<endl;
        }
        

};

int main(){

    //statically created object

    Hero ram;   //invoke destructor in end of main automatic
    


    //dynamically created object
    
    Hero *ajay = new Hero;  //need manually automatically destructor
    delete ajay;

    return 0;
}