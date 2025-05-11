#include<iostream>
using namespace std;

// write code to reverse a LL

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

    Node *temp = head;
    while(temp!=NULL){

        cout<<temp->data<<"  ";
        temp = temp->next;

    }

}

Node* reverse(Node* &head){

    Node *before = NULL;
    Node *current = head;
    Node *after = NULL; 

    while(current != NULL){

        after = current->next;
        current->next = before;

        before = current;
        current = after;
    }
    return before;
}



Node* reverse1(Node* &head){ //recursive approach

    //Base case --> 1 or 0 node
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* newHead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
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

    head = reverse1(head);

    cout<<endl<<"after reverse : "<<endl;

    traverse(head);

    

    return 0;
}