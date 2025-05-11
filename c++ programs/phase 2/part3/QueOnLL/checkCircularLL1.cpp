#include<iostream>
using namespace std;

// this code for only if ll is circular or not circular 
// here no loop involved




class Node{

    public:

    int data;
    Node *next;

    Node(int data){

        this->data = data;
        this->next = NULL;
    }

};

bool IsCircularLL(Node* &head){

    if(head == NULL){
        return true;   // assuming empty list circular
    }

    Node* temp = head;

    while(temp->next != NULL && temp->next != head){
        temp = temp->next;
    }
    if(temp->next == NULL){
        return false;
    }
    if(temp->next == head){
        return true;
    }

}



int main(){

    Node *head = new Node(15);

    Node *second = new Node(24);

    head->next = second;

    Node *third = new Node(25);

    second->next = third;

    Node *fourth = new Node(33);

    third->next = fourth;

    //fourth->next = head;
    
    
    bool ans = IsCircularLL(head);

    if(ans){
        cout<<"linked list is a circular linked list"<<endl;
    }
    else{
        cout<<"linked list is not a circular linked list"<<endl;
    }


    return 0;
}