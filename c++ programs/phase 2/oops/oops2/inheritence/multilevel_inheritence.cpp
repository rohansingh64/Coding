#include<iostream>
using namespace std;

class Animal{

    public:

    string color;

    void sleep(){
        cout<<"sleeping  "<<endl;
    }

};

class petAnimal : public Animal{

    public:

    int age;

    void eat(){
        cout<<"eating  "<<endl;
    }

};

class Dog : public petAnimal {

    public:

    int weight;

    void bark(){
        cout<<"barking  "<<endl;
    }

};

int main(){


    Dog dd;

    dd.age = 6;
    dd.weight = 25;
    dd.color = "brown";

    cout<<"age : "<<dd.age<<endl;
    cout<<"weight : "<<dd.weight<<endl;
    cout<<"color : "<<dd.color<<endl;

    dd.sleep();
    dd.eat();
    dd.bark();


    return 0;
}