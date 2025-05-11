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


Node* sumOfNosRepAsLL(Node* &head1,Node* &head2){


    head1 = reverse(head1);

    head2 = reverse(head2);

    Node* head3 = NULL;

    Node* temp1 = head1;
    Node* temp2 = head2;

    int sum = 0;
    int carry = 0;

    while(temp1 != NULL  && temp2 != NULL){

        sum = temp1->data + temp2->data + carry;
        carry = sum / 10 ;
        sum = sum % 10;

        insertAtEnd(head3,sum);

        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while(temp1 != NULL){
        sum = temp1->data + carry;
        carry = sum / 10 ;
        sum = sum % 10;

        insertAtEnd(head3,sum);

        temp1 = temp1->next;
    }
    while(temp2 != NULL){
        sum = temp2->data + carry;
        carry = sum / 10 ;
        sum = sum % 10;

        insertAtEnd(head3,sum);

        temp2 = temp2->next;
    }
    if(temp1 == NULL && temp2 == NULL && carry > 0){
        insertAtEnd(head3,carry);
    }


    head3 = reverse(head3);

    return head3;

    
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
    Node* head1 = new Node(9);
    insertAtEnd(head1,9);
    insertAtEnd(head1,9);
    
    
    cout<<endl<<"first no  : "<<endl;
    traverse(head1);

    Node* head2 = new Node(9);
    insertAtEnd(head2,9);
    insertAtEnd(head2,9);
    insertAtEnd(head2,9);


    cout<<endl<<"second no : "<<endl;
    traverse(head2);

    Node* head3 = sumOfNosRepAsLL(head1,head2);

    cout<<endl<<"sum is : "<<endl;
    traverse(head3);


    return 0;
}