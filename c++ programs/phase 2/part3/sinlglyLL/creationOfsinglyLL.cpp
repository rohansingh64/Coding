#include<iostream>
using namespace std;

// write code for 12 -> 18 -> 20 -> 30




class Node{

    public:

    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

int main(){

    Node *head = new Node(12);

    Node *first = new Node(18);
    head->next = first;

    Node *second = new Node(20);
    first->next = second;

    Node *third = new Node(30);
    second->next = third;

    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }cout<<"NULL"<<endl;

    

    return 0;
}