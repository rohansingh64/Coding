#include<iostream>
using namespace std;

// remove duplicate from sorted linked list

//  ---->   1  2  2  3  3  3  4  5  5




class Node{

    public:

    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void traverse(Node* &head){


    if(head == NULL){
        cout<<endl<<"empty linked list "<<endl;
    }

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;

}


Node* removeDuplicateFromSortedLL(Node* &head){


    if(head == NULL){
        return head;
    }


    Node* temp = head;

    while(temp->next!=NULL){

        if(temp->data != temp->next->data){
            temp = temp->next;
        }
        else{
            Node* ptr = temp->next;
            temp->next = ptr->next;
            delete ptr;
            ptr = NULL;
        }
    }
    return head;
}








int main(){

    Node *head = new Node(1);

    Node *first = new Node(2);
    head->next = first;

    Node *second = new Node(2);
    first->next = second;

    Node *third = new Node(3);
    second->next = third;

    Node *forth = new Node(3);
    third->next = forth;

    Node *fifth = new Node(3);
    forth->next = fifth;

    Node *sixth = new Node(4);
    fifth->next = sixth;

    Node *seventh = new Node(5);
    sixth->next = seventh;

    Node *eighth = new Node(5);
    seventh->next = eighth;


    cout<<endl<<"before removal : "<<endl;
    traverse(head);

    head = removeDuplicateFromSortedLL(head);

    cout<<endl<<"after removal : "<<endl;
    traverse(head);
    

    return 0;
}