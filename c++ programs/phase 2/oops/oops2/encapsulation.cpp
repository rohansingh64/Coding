#include<iostream>
using namespace std;


// if we put only getters in class not setters this class become read only class


class Student{

    private:  //by making all data member private we make fully encapsulated class

    int rollNo;
    string name;
    char standard;

    public:

    Student(int rollNo,string name,char standard){

        this->rollNo = rollNo;
        this->name = name;
        this->standard = standard;
    }

    int getrollNo(){
        return this->rollNo;
    }

    string getName(){
        return this->name;
    }
    char getStandard(){
        return this->standard;
    }


};




int main(){


    Student first(12,"akshay",'6');

    cout<<"first student rollNo : "<<first.getrollNo()<<endl;
    cout<<"first student name : "<<first.getName()<<endl;
    cout<<"first student standard : "<<first.getStandard()<<endl;


    return 0;
}