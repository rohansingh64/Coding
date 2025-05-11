#include<iostream>
using namespace std;

class Animal{

    public:

    int weight;
    int age;

    void sleep(){
        cout<<"sleeping  "<<endl;
    }

};

class Dog : public Animal {

    public:

    void eat(){
        cout<<"eating  "<<endl;
    }

};

int main(){


    Dog dd;

    dd.age = 6;
    dd.weight = 25;

    cout<<"age : "<<dd.age<<endl;
    cout<<"weight : "<<dd.weight<<endl;

    dd.sleep();
    dd.eat();


    return 0;
}