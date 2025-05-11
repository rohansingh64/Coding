#include<iostream>
#include<string.h>
using namespace std;

class Hero{
    
    private:
        int health;
        char level;
        char * gamename;
    public:

        void print(){
            cout<<"health is : "<<health<<" , ";
            cout<<"level is : "<<level<<" , ";
            cout<<"game name is : "<<gamename;
            cout<<endl;
        }

        Hero(){
            cout<<"default constructor called "<<endl;
            gamename = new char[100];
        }

        void setHealth(int health){
            this->health = health;
        }

        void setLevel(char level){
            this->level = level;
        }

        int getHealth(){
            return health;
        }

        char getLevel(){
            return level;
        }
        void setgameName(char gamename[]){
            strcpy(this->gamename, gamename);
        }

        char* getgameName(){

            return gamename;
        
        }

};

int main(){

    Hero ram;

    ram.setHealth(100);
    ram.setLevel('A');

    char gamename[6] = "rambo";
    ram.setgameName(gamename);

    cout<<"printing ram details : "<<endl;

    ram.print();



    Hero arav(ram);// or Hero arav = ram;

    //copy constructor invoked(inbuild copy constructor)
    // create a new object(arav) and coping ram values to arav using inbuild copy constructor

    

    cout<<"printing arav details : "<<endl;

    arav.print();
    
    arav.setHealth(80);
    cout<<endl<<"   ***  after change arav health  *** "<<endl<<endl;

    cout<<"printing ram details : "<<endl;

    ram.print();

    cout<<"printing arav details : "<<endl;

    arav.print();


    ram.setgameName("rama rambo");
    cout<<endl<<"   ***  after change ram gameName  *** "<<endl<<endl;

    // arav gamename is also become "rama rambo" because of inbuild copy constructor use swallow copy
    cout<<"printing ram details : "<<endl;

    ram.print();

    cout<<"printing arav details : "<<endl;

    arav.print();



    return 0;
}