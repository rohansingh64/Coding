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

void insertAtHead(Node* &head,int data){

    Node *ptr = new Node(data);

    if(head == NULL){//empty ll me insertion
        head = ptr;
        return ;
    }

    head->prev = ptr;
    ptr->next = head;
    head = ptr;

}


void insertAtEnd(Node* &head,int data){

    Node *ptr = new Node(data);

    if(head == NULL){//insertion in empty ll
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


void insertAtPosition(Node* &head,int data,int position){

    if(position == 1){
        insertAtHead(head,data);
        return ;
    }

    int p = 1;
    Node *temp = head;
    while(p < position - 1){
        temp = temp->next;
        p++;
    }
    if(temp->next == NULL){
        insertAtEnd(head,data);
        return ;
    }
    Node *ptr = new Node(data);

    ptr->prev = temp;
    ptr->next = temp->next;

    temp->next->prev = ptr;
    temp->next = ptr;

}





int main(){
    
    Node *head = NULL;

    insertAtHead(head,10);
    cout<<endl<<"after insert 10 at head "<<endl;
    traverse(head);

    cout<<endl<<"after insert 5 at head "<<endl;
    insertAtHead(head,5);
    traverse(head);

    cout<<endl<<"after insert 12 at end "<<endl;
    insertAtEnd(head,12);
    traverse(head);

    cout<<endl<<"after insert 15 at end "<<endl;
    insertAtEnd(head,15);
    traverse(head);

    cout<<endl<<"after insert 11 at 3rd position "<<endl;
    insertAtPosition(head,11,3);
    traverse(head);

    cout<<endl<<"after insert 1 at 1st position "<<endl;
    insertAtPosition(head,1,1);
    traverse(head);

    cout<<endl<<"after insert 54 at 7th position "<<endl;
    insertAtPosition(head,54,7);
    traverse(head);


    return 0;
}