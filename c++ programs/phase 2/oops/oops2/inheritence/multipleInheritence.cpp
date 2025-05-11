#include<iostream>
using namespace std;

class Student{

    public:

    int rollNo;
    string college;

    void studing(){
        cout<<"currently studying"<<endl;
    }
};

class Player{

    public:

    string game;

    void playing(){
        cout<<"currently also playing"<<endl;
    }
};

class Boy : public Student , public Player {

    public:
    
    void sleep(){
        cout<<"sleeping "<<endl;
    }

};

int main(){

    Boy b;

    b.rollNo = 12;
    b.college = "gcet";
    b.game = "cricket";

    cout<<"roll no : "<<b.rollNo<<endl;
    cout<<"college : "<<b.college<<endl;
    cout<<"game : "<<b.game<<endl;

    b.studing();
    b.playing();
    b.sleep();

    return 0;
}