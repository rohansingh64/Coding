#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next;

    Node(int data){

        this->data = data;
        this->next = NULL;
    }
};



class Queue{

    public:

        Node *head;
        Node *tail;
        int count;
        int MaxSize;

        Queue(int MaxSize){

            this->MaxSize = MaxSize;

            count = 0;

            head = NULL;
            tail = NULL;
        }

        void enque(int data){  // push  -->  at rear
            if(count == MaxSize){
                cout<<"queue overflow can't enque(push)"<<endl;
            }
            else{
                Node* ptr = new Node(data);
                count++;
                if(head == NULL){// empty queue
                    head = ptr;
                    tail = ptr;
                }
                else{
                    tail->next = ptr;
                    tail = ptr;
                }
            }
        }

        void deque(){  // pop  -->  from front
            if(head == NULL){
                cout<<"queue underflow can't deque(pop)"<<endl;
            }
            else{
                Node *temp = head;
                int x = temp->data;
                if(head == tail){
                    head = NULL;
                    tail = NULL;
                }
                else{
                    head = head->next;
                }
                count--;
                delete temp;
                //return x;
            }
        }
        bool isEmpty(){
            if(head == NULL){
                return true;
            }
            else{
                return false;
            }
        }
        void frontElement(){
            if(head == NULL){
                cout<<"queue underflow no top element"<<endl;
            }
            else{
                cout<<"front element of queue is : "<<head->data<<endl;
            }
        }
        void rearElement(){
            if(head == NULL){
                cout<<"queue underflow no rear element"<<endl;
            }
            else{
                cout<<"rear element of queue is : "<<tail->data<<endl;
            }
        }
        int size(){
            return count;
        }
};

int main(){


    Queue* q = new Queue(10);

    cout<<"q is empty or not "<<q->isEmpty()<<endl;

    cout<<"current size of q "<<q->size()<<endl;

    q->enque(17);
    q->enque(37);
    q->enque(46);
    q->enque(20);
    q->enque(43);
    q->enque(56);

    cout<<"q is empty or not "<<q->isEmpty()<<endl;

    cout<<"current size of q "<<q->size()<<endl;

    q->deque();

    q->frontElement();
    q->rearElement();

    cout<<"current size of q "<<q->size()<<endl;

    q->deque();

    q->enque(98);
    q->enque(83);
    
    q->frontElement();
    q->rearElement();


    return 0;
}