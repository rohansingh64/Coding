#include<iostream>
using namespace std;



class Node{

    public:

    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void traverse(Node * &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}

void deleteAtHead(Node* &head){

    if(head->next == NULL){//only one element present in ll after deletion ll empty
        delete head;
        head = NULL;
        return ;
    }

    Node *ptr = head;
    head = head->next;
    delete ptr;
    ptr = NULL;
}

void deleteAtEnd(Node* &head){

    if(head->next == NULL){//only one element present in ll after deletion ll empty
        delete head;
        head = NULL;
        return ;
    }

    Node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node *ptr = temp->next;
    temp->next = NULL;
    delete ptr;
    ptr = NULL;
}


void deleteAtPosition(Node* &head , int position){

    if(position == 1){
        deleteAtHead(head);
        return ;
    }

    Node *temp = head;
    int p = 1;
    while(p < position - 1){
        temp = temp->next;
        p++;
    }

    if(temp->next->next == NULL){
        deleteAtEnd(head);
        return ;
    }
    Node *ptr = temp->next;
    temp->next = temp->next->next;
    delete ptr;
    ptr = NULL;
}



void insertAtEnd(Node* &head,int data){

    Node *ptr = new Node(data);

    if(head == NULL){// insertion in empty ll
        head = ptr;
        return ;
    }


    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = ptr;

}

int main(){

    Node *head = new Node(10);

    insertAtEnd(head,12);
    insertAtEnd(head,15);
    insertAtEnd(head,19);
    insertAtEnd(head,20);
    insertAtEnd(head,58);
    insertAtEnd(head,13);
    insertAtEnd(head,32);
    insertAtEnd(head,52);
    insertAtEnd(head,40);

    cout<<endl;
    traverse(head);


    deleteAtHead(head);

    cout<<endl<<"after deletion at head "<<endl;

    traverse(head);


    deleteAtEnd(head);

    cout<<endl<<"after deletion at end "<<endl;

    traverse(head);

    deleteAtPosition(head,4);

    cout<<endl<<"after deletion at 4th position "<<endl;

    traverse(head);

    deleteAtPosition(head,1);

    cout<<endl<<"after deletion at 1st position "<<endl;

    traverse(head);

    deleteAtPosition(head,6);

    cout<<endl<<"after deletion at 6th position "<<endl;

    traverse(head);

    return 0;
}