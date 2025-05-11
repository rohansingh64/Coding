#include<iostream>
using namespace std;

// hybrid --> combination of more than one inheritence

// example  --->  multilevel and hierarchical 

class Human{

    public :

    void identity(){
        cout<<"A human being"<<endl;
    }

};

class Student : public Human{

    public:

    void identityStudent(){
        cout<<"currently studying"<<endl;
    }
};

class Girl : public Student{

    public:

    void identityGirl(){
        cout<<"I am a girl "<<endl;
    }

};

class Boy : public Student{

    public:
    
    void identityBoy(){
        cout<<"I am a boy "<<endl;
    }

};

int main(){


    Boy b;
    b.identityBoy();
    b.identityStudent();
    b.identity();

    Girl g;
    g.identityGirl();
    g.identityStudent();
    g.identity();

    return 0;
}