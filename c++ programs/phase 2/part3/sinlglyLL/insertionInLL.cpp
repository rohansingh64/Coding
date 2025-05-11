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

void traverse(Node * &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}


void insertAtHead(Node* &head,int data){

    Node *ptr = new Node(data);

    if(head == NULL){// insertion in empty ll
        head = ptr;
        return ;
    }

    ptr->next = head;
    head = ptr;

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


void insertAtPosition(Node* &head,int data,int position){

    //for at head (position = 1)

    if(position == 1){
        insertAtHead(head,data);
        return ; // why return --> if not it insert again in lower codes)
    }

    int p = 1;
    
    Node *temp = head;
    while(p < position - 1){//traverse to one position before from insert position
        temp = temp->next;
        p++;
    }
    if(temp->next == NULL){//means insert position is end
        insertAtEnd(head,data);
        return ;
    }
    Node *ptr = new Node(data);
    ptr->next = temp->next;
    temp->next = ptr;

}



int main(){

    Node *head = new Node(12);

    Node *first = new Node(18);
    head->next = first;

    Node *second = new Node(20);
    first->next = second;

    Node *third = new Node(30);
    second->next = third;

    traverse(head);

    //insert 10 at head

    insertAtHead(head,10);

    cout<<endl<<" after insert 10 at head "<<endl;

    traverse(head);

    //insert 40 at end

    insertAtEnd(head,40);

    cout<<endl<<" after insert 40 at end "<<endl;

    traverse(head);

    //insert 88 at 3rd position

    insertAtPosition(head,88,3);

    cout<<endl<<" after insert 88 at 3rd position "<<endl;

    traverse(head);

    insertAtPosition(head,8,1);

    cout<<endl<<" after insert 8 at 1st position "<<endl;

    traverse(head);

    insertAtPosition(head,21,9);

    cout<<endl<<" after insert 21 at 9th position "<<endl;

    traverse(head);


    return 0;
}