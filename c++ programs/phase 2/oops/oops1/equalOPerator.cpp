#include<iostream>
#include<string.h>
using namespace std;



class Hero{
    
    private:
        int health;
        char level;

    public:

        char *gamename;

        Hero(){
            
            gamename = new char[100];
            cout<<"default constructor invoke "<<endl;
        }        


        void print(){
            cout<<"health is : "<<health<<" , ";
            cout<<"level is : "<<level<<" , ";
            cout<<"game name is : "<<gamename;
            cout<<endl;
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

    char ch[10] = "rambo";
    ram.setgameName(ch);

    cout<<"printing ram details : "<<endl;

    ram.print();


    

    Hero arav;

    arav.setHealth(92);
    arav.setLevel('B');

    char s[10] = "AJ";
    arav.setgameName(s);


    cout<<"printing arav details : "<<endl;

    arav.print();
    

    arav = ram;// all value of ram put in arav ( EQUAL OPERATOR )

    cout<<"printing arav details after coping all value of ram to aarv : "<<endl;

    arav.print();


    return 0;
}