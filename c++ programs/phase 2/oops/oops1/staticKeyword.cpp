#include<iostream>
using namespace std;



class Hero {

    private:

    int health;
    char level;

    public:

    static int time;

    void setHealth(int health){
        this->health = health;
    }

    void setLevel(char level){
        this->level = level;
    }

    static int getTime(){
        //this->level; non static data member level is not access in static function
        // this keyword not use in static function
        return time;
    }

    void print(){
        cout<<"health : "<<this->health<<endl;
        cout<<"level : "<<this->level<<endl;
        cout<<"time : "<<this->time<<endl;
    }



};
int Hero :: time = 10;



int main(){

    cout<<"time : "<< Hero::time <<endl;

    Hero ram;

    cout<<"ram.time : "<< ram.time<<endl;

    cout<<"time using static function random: "<<ram.getTime()<<endl;

    Hero shiv;

    cout<<"shiv.time : "<< shiv.time<<endl;

    shiv.time = 15;// change time of all objects because it is shareable or common to all objects

    cout<<endl<<"  ***  after shiv time = 15  ***"<<endl;

    cout<<"time : "<< Hero::time <<endl;

    cout<<"ram.time : "<< ram.time<<endl;

    cout<<"shiv.time : "<< shiv.time<<endl;


    return 0;
}