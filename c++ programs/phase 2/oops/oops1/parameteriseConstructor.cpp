#include<iostream>
using namespace std;

// you created default or parameterise constructor 
// both will cause death of inbuild deafault constructor


class Hero{
    
    private:
        int health;
        char level;
    public:

        Hero(){
            cout<<"default constructor called "<<endl;
            this->health = 0;
            this->level = '0';
        }

        Hero(int health){
            cout<<"parameterise constructor called (1 parameter)"<<endl;
            this->health = health;
            this->level = 'Z';
        }

        Hero(int health,char level){
            cout<<"parameterise constructor called (2 parameter)"<<endl;
            this->health = health;
            this->level = level;
        }

        int getHealth(){
            return health;
        }

        char getLevel(){
            return level;
        }
        

};

int main(){

    Hero ram(100,'A');//object created 2 parameterise constructor invoke automatically

    cout<<"ram health : "<<ram.getHealth()<<endl;
    cout<<"ram level : "<<ram.getLevel()<<endl;


    Hero arav(84);// 1  parameter constructor invoke

    cout<<"arav health : "<<arav.getHealth()<<endl;
    cout<<"arav level : "<<arav.getLevel()<<endl;




    //Hero ajay; if you not write your default constructor it gives error 
    //because parameterise constructor also replace inbuild default constructor

    Hero ajay;//your default constructor invoke(no inbuild)

    cout<<"ajay health : "<<ajay.getHealth()<<endl;
    cout<<"ajay level : "<<ajay.getLevel()<<endl;

    return 0;
}