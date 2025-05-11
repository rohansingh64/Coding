#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};


void traverse(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;

}

Node* reverse(Node* &head){

    Node* before = NULL;
    Node* current = head;
    Node* after = NULL;

    while(current != NULL){

        after = current->next;

        current->next = before;
        current->prev = after;

        before = current;
        current = after;

    }

    return before;

}



int main(){

    Node* head = new Node(12);

    Node* second = new Node(18);

    head->next = second;
    second->prev = head;

    Node* third = new Node(20);

    second->next = third;
    third->prev = second;

    Node* fourth = new Node(30);

    third->next = fourth;
    fourth->prev = third;

     traverse(head);

    head = reverse(head);

    cout<<"after reverse : "<<endl;
    traverse(head);

    return 0;
}