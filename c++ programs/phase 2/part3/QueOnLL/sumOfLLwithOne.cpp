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

Node* reverse(Node* &head){

    if(head->next == NULL){
        return head;
    }

    Node* before = NULL;
    Node* current = head;
    Node* after = NULL;
    
    while(current != NULL){
        after = current->next;

        current->next = before;

        before = current;
        current = after;

    }
    return before;

}

void insertAtEnd(Node* &head,int data){
    Node* ptr = new Node(data);

    if(head == NULL){
        head = ptr;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = ptr;
}


Node* sumOfNosRepAsLL(Node* &head){


    head = reverse(head);

    Node* head1 = NULL;

    Node* temp = head;

    int sum = 0;
    int carry = 1;// for adding 1 to ll

    while(temp != NULL){
        sum = temp->data + carry;
        carry = sum / 10 ;
        sum = sum % 10;

        insertAtEnd(head1,sum);

        temp = temp->next;
    }
    
    if(temp == NULL &&  carry > 0){
        insertAtEnd(head1,carry);
    }


    head1 = reverse(head1);

    return head1;

    
}


void traverse(Node* &head){

    if(head == NULL){
        cout<<endl<<"empty linked list"<<endl;
        return;
    }
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }cout<<endl;
}


int main(){

    Node* head = new Node(9);
    insertAtEnd(head,9);
    insertAtEnd(head,9);
    insertAtEnd(head,9);


    cout<<endl<<"no rep as linked list: "<<endl;
    traverse(head);

    Node* head1 = sumOfNosRepAsLL(head);

    cout<<endl<<"sum is : "<<endl;
    traverse(head1);


    return 0;
}