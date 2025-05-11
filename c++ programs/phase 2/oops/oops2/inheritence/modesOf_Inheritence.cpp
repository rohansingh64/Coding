#include<iostream>
using namespace std;



class Human{

    private:

    int age;

    protected:
    
    int height;

    public:

    string name;

    void setAge(int age){
        this->age = age;
    }

    void setHeight(int height){
        this->height = height;
    }

    int getAge(){
        return this->age;
    }

    int getHeight(){
        return this->height;
    }


};

class Male : public Human {

    private:

    int strength;

    public:

    void setStrength(int strength){
        this->strength = strength;
    }

    int getStrength(){
        return this->strength;
    }

    /*
    int getAge(){
        return this->age;   //age is not accessible in child class (private)
    }
    */



};




int main(){


    Male first;

    //first.height = 10; not directly access protected member
    first.setHeight(10);
    cout<<"first height : "<<first.getHeight()<<endl;
    first.setAge(24);
    cout<<"first age : "<<first.getAge()<<endl;
    first.name = "suraj";//public in parent --> public mode --> public in child 
    cout<<"first name : "<<first.name<<endl;
    first.setStrength(102);
    cout<<"first strength : "<<first.getStrength()<<endl;


    return 0;
}