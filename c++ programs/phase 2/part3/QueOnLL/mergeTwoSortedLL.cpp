#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next;

    Node(int data){

        this->data = data;
        this->next = NULL;
    }
};


//  this approach takes  space complexity of O(1)  ||  time --> O(n1+n2) total length of both ll

void linkNodetoTail(Node* &head,Node* &tail,Node* &temp){

    tail->next = temp;
    tail = temp;
}

Node* mergeTwoSortedLL(Node* &head1,Node* &head2){

    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    Node* temp1 = head1;
    Node* temp2 = head2;
 
    
    Node* head = new Node(-1);// dummy node
    Node* tail = head;

    while(temp1 != NULL && temp2 != NULL){

        if(temp1->data <= temp2->data){
            linkNodetoTail(head,tail,temp1);
            temp1 = temp1->next;
        }
        else{
            linkNodetoTail(head,tail,temp2);
            temp2 = temp2->next;
        }
    }

    while(temp1 != NULL){
        linkNodetoTail(head,tail,temp1);
        temp1 = temp1->next;
    }

    while(temp2 != NULL){
        linkNodetoTail(head,tail,temp2);
        temp2 = temp2->next;
    }
    return head->next;// head dummy node (-1)
}


void insertAtEnd(Node* &head,int data){
    Node* ptr = new Node(data);

    if(head == NULL){
        head = ptr;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = ptr;
}

void traverse(Node* &head){

    if(head == NULL){
        cout<<endl<<"empty linked list"<<endl;
        return;
    }
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }cout<<endl;
}


int main(){
    Node* head1 = new Node(3);
    insertAtEnd(head1,6);
    insertAtEnd(head1,7);
    insertAtEnd(head1,10);
    insertAtEnd(head1,17);
    
    cout<<endl<<"sorted linked list 1 : "<<endl;
    traverse(head1);

    Node* head2 = new Node(2);
    insertAtEnd(head2,3);
    insertAtEnd(head2,8);
    insertAtEnd(head2,20);
    insertAtEnd(head2,28);

    cout<<endl<<"sorted linked list 2 : "<<endl;
    traverse(head2);

    Node* head = mergeTwoSortedLL(head1,head2);

    cout<<endl<<"merged linked list : "<<endl;
    traverse(head);


    return 0;
}