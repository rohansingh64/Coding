#include<iostream>
using namespace std;

// here no head or first or last in circular LL
//But for a start point we named any one as head


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

void insertAtHead(Node* &head,int data){


    Node *ptr = new Node(data);

    //if CLL is empty
    if(head == NULL){
        head = ptr;
        head->next = head;
        return ;
    }
    ptr->next = head;
    Node *temp = head->next;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = ptr;
    head = ptr;
}


void insertAtEnd(Node* &head,int data){


    Node *ptr = new Node(data);

    //if CLL is empty
    if(head == NULL){
        head = ptr;
        head->next = head;
        return ;
    }
    Node *temp = head->next;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = head;
}


void insertAtPosition(Node* &head,int data,int position){


    Node *ptr = new Node(data);

    //if CLL is empty
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    int p = 1;
    Node *temp = head;
    while(p < position - 1){
        temp = temp->next;
        p++;
    }
    if(temp->next == head){
        insertAtEnd(head,data);
        return ;
    }
    ptr->next = temp->next;
    temp->next = ptr;
}






int main(){

    Node *head = new Node(15);

    Node *second = new Node(24);

    head->next = second;

    Node *third = new Node(30);

    second->next = third;

    Node *fourth = new Node(33);

    third->next = fourth;

    fourth->next = head;
    
    cout<<endl<<"CLL : "<<endl;
    traverse(head);

    insertAtHead(head,8);
    cout<<endl<<"after insert 8 at head   CLL : "<<endl;
    traverse(head);

    insertAtEnd(head,38);
    cout<<endl<<"after insert 38 at end   CLL : "<<endl;
    traverse(head);

    insertAtPosition(head,28,4);
    cout<<endl<<"after insert 28 at 4th position    CLL : "<<endl;
    traverse(head);

    insertAtPosition(head,3,1);
    cout<<endl<<"after insert 3 at 1st position    CLL : "<<endl;
    traverse(head);

    insertAtPosition(head,40,9);
    cout<<endl<<"after insert 40 at 9th position    CLL : "<<endl;
    traverse(head);


    return 0;
}