#include<iostream>
#include<string.h>
using namespace std;

// see theory of padding and greedy alignment 

class Hero{

    private:        //private data member and methods cant accessed out side of class

        //properties --> data member
        int health;
        char level;
        //char *gamename;

    public:         // public data members and methods accessed outside class
        int power;
        char gamename[100];

        //behavior --> method

        void print(){
            cout<<"health is : "<<health<<endl;
            cout<<"level is : "<<level<<endl;
            cout<<"power is : "<<power<<endl;
            cout<<"game name is : "<<gamename<<endl;
        }

        // class methods use for access private member outside --> setters/getters
        void setHealth(int health){

            // if we write only health without this pointer it refers 
            //which is nearer means passing input health to function (set health)

            //health = health; // here both health refers passing input to function

            this->health = health;
            // this is a pointer which points object's data member

        }

        int getHealth(){

            return health;
        
        }

        void setLevel(char l,int password){

            if(password==1245){
                level = l; // no need of this pointer l refers to pass i/p to function and level refers level
            }
            // you can use codition also like password user name for getter and setter
        
        }

        char getLevel(){

            return level;
        
        }

        void setgameName(char gamename[]);// defining outside to the class using :: operator

        char* getgameName(){

            return gamename;
        
        }

};

// we can also write class methods outside to class using :: operator

void Hero :: setgameName(char gamename[]){

    strcpy(this->gamename, gamename);
}






int main(){

    // statically object creation
    Hero ram;  // same as normal int a;   Hero ram; creating a ram object of Hero type


    //cout<<"size os ram object : "<<sizeof(ram)<<endl; gives more size due to padding and greedy alignment
    
    // use dot operator for access methods and data members
    ram.setHealth(100);



    //cout<<endl<<"ram health is : "<<ram.health<<endl;// error private member not access directly
    cout<<"ram health is : "<<ram.getHealth()<<endl;



    //ram.setLevel('A',123); //level not set if condition of setLevel false for 123 still garbage value

    ram.setLevel('A',1245);  // if condition of setLevel true;




    ram.power = 124;// directly access public datamenber

    char ch[10] = "rambo";
    ram.setgameName(ch);



    cout<<"printing ram details : "<<endl;
    ram.print();


    // dynamically object creation
    Hero *ajay = new Hero; // same as normal -->  int *a = new int;

    ajay->setHealth(50);// use pointer for access method and data member

    ajay->setLevel('B',1245);

    //or  ->  or (*name).datamember

    (*ajay).power = 82;

    char s[10] = "AJ";
    ajay->setgameName(s);

    cout<<"printing ajay details : "<<endl;
    ajay->print();

    return 0;
}