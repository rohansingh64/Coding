#include<iostream>
#include<string.h>
using namespace std;

// you created your copy constructor 
// this will cause death of inbuild copy constructor AND inbuild default constructor


class Hero{
    
    private:
        int health;
        char level;

    public:

        char *gamename;

        Hero(){
            //in build default constructor dead due to your copy constructor
            //need to create your default constructor
            gamename = new char[100];
            
            cout<<"default constructor invoke "<<endl;
        }


        Hero(Hero &temp){//why we pass temp as reference not value;see theory
            this->health = temp.health;
            this->level = temp.level;


            //using deep copy
            char * ch =  new char[strlen(temp.gamename)];
            strcpy(ch,temp.gamename);
            this->gamename = ch;
            cout<<"copy constructor invoke "<<endl;
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


    

    Hero arav(ram);//copy constructor invoked(not inbuild copy constructor)
    // create a new object and coping ram values to arav using inbuild copy constructor

    cout<<"printing arav details : "<<endl;

    arav.print();
    
    arav.setHealth(80);
    cout<<endl<<"   ***after change arav health*** "<<endl<<endl;

    cout<<"printing ram details : "<<endl;

    ram.print();

    cout<<"printing arav details : "<<endl;

    arav.print();

    ram.setgameName("rama rambo");
    cout<<endl<<"   ***  after change ram gameName  *** "<<endl<<endl;

    // arav gamename is also become "rama rambo" because of  copy constructor use swallow copy
    // but we make aray game name as intial using deep copy

    cout<<"printing ram details : "<<endl;

    ram.print();

    cout<<"printing arav details : "<<endl;

    arav.print();


    return 0;
}