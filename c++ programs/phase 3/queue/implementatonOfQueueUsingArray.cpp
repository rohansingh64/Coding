#include<iostream>
using namespace std;

class Queue{

    private:

        int front;
        int rear;
        int *arr;
        int MaxSize;
    

    public:

        Queue(int MaxSize){

            front = -1;

            rear = -1;

            this->MaxSize = MaxSize;

            arr = new int[MaxSize];
        }

        void enque(int x){  // push  -->  at rear
            if(rear == MaxSize-1){
                cout<<"queue overflow can't enque(push)"<<endl;
            }
            else{
                if(front == -1 && rear == -1){
                    front++;
                }
                rear++;
                arr[rear] = x;
            }
        }

        void deque(){  // pop  -->  from front
            if(front == -1 && rear == -1){
                cout<<"queue underflow can't deque(pop)"<<endl;
            }
            else{
                if(front == rear){
                    rear = -1;
                    front = -1;
                }
                else{
                    front++;
                }
            }
        }
        bool isEmpty(){
            if(front == -1 && rear == -1){
                return true;
            }
            else{
                return false;
            }
        }
        void frontElement(){
            if(front == -1 && rear == -1){
                cout<<"queue underflow no top element"<<endl;
            }
            else{
                cout<<"front element of queue is : "<<arr[front]<<endl;
            }
        }
        void rearElement(){
            if(front == -1 && rear == -1){
                cout<<"queue underflow no rear element"<<endl;
            }
            else{
                cout<<"rear element of queue is : "<<arr[rear]<<endl;
            }
        }
        int size(){
            if(front == -1 && rear == -1){
                return 0;
            }
            else{
                return rear - front + 1;
            }
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