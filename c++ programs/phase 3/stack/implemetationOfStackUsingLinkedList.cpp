#include<iostream>
using namespace std;


// here head is treated as top (before head par (push)insert and head ko (pop)delete)


class Node{

    public:

    int data;
    Node* next;

    Node(int data){

        this->data = data;
        this->next = NULL;
    }
};


class Stack{

    public:

    Node* head;
    int top;
    int Maxsize;

    Stack(int Maxsize){

        this->Maxsize = Maxsize;

        this->top = -1;

        this->head = NULL;

    }

    void push(int data){
        if(top >= Maxsize-1){
            cout<<"stack overflow can't push "<<data<<endl;
        }
        else{
            top++;
            Node* ptr = new Node(data);
            if(head == NULL){
                head = ptr;
                cout<<data<<" pushed into stack "<<endl;
            }
            else{
                ptr->next = head;
                head = ptr;
                cout<<data<<" pushed into stack "<<endl;
            }
        }
    }

    void pop(){
        if(head == NULL){
            cout<<"stack underflow can't pop element"<<endl;
        }
        else{
            cout<<head->data<<" poped from stack"<<endl;
            Node* temp = head;
            head = head->next;
            delete temp;
            top--;
        }
    }

    int topElement(){
        if(head == NULL){
            cout<<"stack underflow no top element"<<endl;
            return -1;
        }
        return head->data;
    }

    bool isEmpty(){
        if(head == NULL){
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