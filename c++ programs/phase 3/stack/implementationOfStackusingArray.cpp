#include<iostream>
using namespace std;

class Stack{

    public:

    int top;
    int * arr;
    int Maxsize;

    Stack(int Maxsize){

        top = -1;

        this->Maxsize = Maxsize;

        arr = new int[Maxsize];

    }

    void push(int data){
        if(top >= Maxsize-1){
            cout<<"stack overflow can't push "<<data<<endl;
        }
        else{
            top++;
            arr[top] = data;
            cout<<data<<" pushed into stack"<<endl;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"stack underflow can't pop element"<<endl;
        }
        else{
            cout<<arr[top]<<" poped from stack"<<endl;
            top--;
        }
    }

    int topElement(){
        if(top == -1){
            cout<<"stack underflow no top element"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if(top >= Maxsize-1){
            return true;
        }
        return false;
    }

    int size(){
        return top+1;
    }
};

int main(){

    Stack s(5);// Max size = 5;

    // push operation
    s.push(2);
    s.push(3);
    s.push(9);
    s.push(8);
    s.push(74);

    if(s.isFull()){
        cout<<"stack is full"<<endl;
    }
    else{
        cout<<"stack is not full"<<endl;
    }
    s.push(87);

    //pop operation
    s.pop();

    cout<<"top element of stack : "<<s.topElement()<<endl;

    if(s.isEmpty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    cout<<"size of stack(currently no of elements in stack) : "<<s.size()<<endl;

    s.pop();

    cout<<"top element of stack : "<<s.topElement()<<endl;

    s.pop();

    cout<<"top element of stack : "<<s.topElement()<<endl;



    return 0;
}