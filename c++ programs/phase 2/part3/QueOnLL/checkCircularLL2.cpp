#include<iostream>
using namespace std;

// this code for checking a ll is circular or not if loop also present in ll 

// we use floyd algo for this

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

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL && fast->next != NULL){

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast && slow == head){//means ll has loop and that loop contain head --=>> circular ll
            return true;
        }

        if(slow == fast && slow != head){//means ll has loop but loop not contain head  it not circular ll
            return false;
        }
    }

    return false;

}



int main(){

    Node *head = new Node(15);

    Node *second = new Node(24);

    head->next = second;

    Node *third = new Node(25);

    second->next = third;

    Node *fourth = new Node(33);

    third->next = fourth;

    //fourth->next = NULL;// no loop and no circular ll

    //fourth->next = head;// loop containing head --> circular

    fourth->next = second;// loop but loop not contain head --> not circular ll
    
    
    bool ans = IsCircularLL(head);

    if(ans){
        cout<<"linked list is a circular linked list"<<endl;
    }
    else{
        cout<<"linked list is not a circular linked list"<<endl;
    }


    return 0;
}