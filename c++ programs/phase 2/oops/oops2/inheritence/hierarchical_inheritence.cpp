#include<iostream>
using namespace std;

class Student{

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

    Student s;

    s.identityStudent();

    Boy b;
    b.identityBoy();
    b.identityStudent();

    Girl g;
    g.identityGirl();
    g.identityStudent();

    return 0;
}