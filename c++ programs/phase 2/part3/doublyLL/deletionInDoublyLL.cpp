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
    }cout<<endl;

}

void deletionAtHead(Node* &head){


    if(head->next == NULL){//1 remaining
        delete head;
        head = NULL;
        return ;
    }
    Node *ptr = head;
    head->next->prev = NULL;
    head = head->next;
    delete ptr;
    ptr = NULL;

}


void deletionAtEnd(Node* &head){

    if(head->next == NULL){//1 remaining
        delete head;
        head = NULL;
        return ;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
    temp = NULL;

}


void deletionAtPosition(Node* &head,int position){

    if(position == 1){
        deletionAtHead(head);
        return ;
    }

    int p = 1;
    Node *temp = head;
    while(p < position){
        temp = temp->next;
        p++;
    }
    if(temp->next == NULL){
        deletionAtEnd(head);
        return ;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
    temp = NULL;

}


void insertAtEnd(Node* &head,int data){

    Node *ptr = new Node(data);

    if(head == NULL){//insert in empty ll
        head = ptr;
        return ;
    }

    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->prev = temp;

}




int main(){
    
    Node *head = NULL;

    insertAtEnd(head,5);
    insertAtEnd(head,11);
    insertAtEnd(head,17);
    insertAtEnd(head,24);
    insertAtEnd(head,21);
    insertAtEnd(head,37);
    insertAtEnd(head,38);
    insertAtEnd(head,42);

    traverse(head);

    deletionAtHead(head);
    cout<<endl<<"after deletion at head"<<endl;
    traverse(head);

    deletionAtEnd(head);
    cout<<endl<<"after deletion at end"<<endl;
    traverse(head);
    
    deletionAtPosition(head,3);
    cout<<endl<<"after deletion at 3rd position"<<endl;
    traverse(head);

    deletionAtPosition(head,1);
    cout<<endl<<"after deletion at 1st position"<<endl;
    traverse(head);

    deletionAtPosition(head,4);
    cout<<endl<<"after deletion at 4th position"<<endl;
    traverse(head);

    

    return 0;
}