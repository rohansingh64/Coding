#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node *prev;
    Node *next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void traverse(Node* &head){

    Node *temp = head;

    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node *head = new Node(5);

    Node *second = new Node(8);

    head->next = second;
    second->prev = head;

    Node *third = new Node(14);

    second->next = third;
    third->prev = second;

    Node *fourth = new Node(11);

    third->next = fourth;
    fourth->prev = third;

    traverse(head);

    return 0;
}