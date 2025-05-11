#include<iostream>
using namespace std;

// here no head or first or last in circular LL
//But for a start point we named any one as head


class Node{

    public:

    int data;
    Node *next;
    Node *prev;

    Node(int data){

        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

};


void traverse(Node* &head){

    if(head == NULL){
        cout<<"empty circular linked list "<<endl;
        return ;
    }

    cout<<head->data<<" ";
    Node *temp = head->next;

    while(temp != head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void deletionAtHead(Node* &head){

    //if CLL has only one element
    if(head->next == head){
        delete head;
        head = NULL;
        return ;
    }
    Node *temp = head;

    head->prev->next = head->next;
    head->next->prev = head->prev;
    head = head->next;

    delete temp;
    temp = NULL;
}

void deletionAtEnd(Node* &head){

    //if CLL has only one element
    if(head->next == head){
        delete head;
        head = NULL;
        return ;
    }
    Node *temp = head->prev;
    temp->prev->next = head;
    head->prev = temp->prev;

    delete temp;
    temp = NULL;
}

void deletionAtPosition(Node* &head,int position){

    //if CLL is empty
    if(position == 1){
        deletionAtHead(head);
        return;
    }
    int p = 1;
    Node *temp = head;
    while(p < position ){// for at position
        temp = temp->next;
        p++;
    }
    if(temp->next == head){
        deletionAtEnd(head);
        return ;
    }
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;

    delete temp;
    temp = NULL;
}



void insertAtEnd(Node* &head,int data){


    Node *ptr = new Node(data);

    //if CLL is empty
    if(head == NULL){
        head = ptr;
        head->next = head;
        head->prev = head;
        return ;
    }
    ptr->next = head;
    ptr->prev = head->prev;
    head->prev->next = ptr;
    head->prev = ptr;
}


int main(){

    Node *head = new Node(15);

    Node *second = new Node(24);

    head->next = second;
    second->prev = head;

    Node *third = new Node(25);

    second->next = third;
    third->prev = second;

    Node *fourth = new Node(33);

    third->next = fourth;
    fourth->prev = third;

    fourth->next = head;
    head->prev = fourth;
    
    cout<<endl<<"CLL : "<<endl;
    traverse(head);

    insertAtEnd(head,38);
    cout<<endl<<"after insert 38 at end   CLL : "<<endl;
    traverse(head);

    insertAtEnd(head,40);
    cout<<endl<<"after insert 40 at end   CLL : "<<endl;
    traverse(head);

    deletionAtHead(head);
    cout<<endl<<"after delete at head    CLL : "<<endl;
    traverse(head);

    deletionAtEnd(head);
    cout<<endl<<"after delete at end    CLL : "<<endl;
    traverse(head);


    deletionAtPosition(head,3);
    cout<<endl<<"after delete at 3rd position    CLL : "<<endl;
    traverse(head);

    deletionAtPosition(head,1);
    cout<<endl<<"after delete at 1st position    CLL : "<<endl;
    traverse(head);

    deletionAtPosition(head,2);
    cout<<endl<<"after delete at 2nd position    CLL : "<<endl;
    traverse(head);

    deletionAtPosition(head,1);
    cout<<endl<<"after delete at 1st position    CLL : "<<endl;
    traverse(head);

    insertAtEnd(head,5);
    cout<<endl<<"after insert 5 at end   CLL : "<<endl;
    traverse(head);


    return 0;
}