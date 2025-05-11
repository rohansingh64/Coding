#include<iostream>
using namespace std;

// you have to break a cll into two cll from middle

//  1 2 3 4 5 6  -->   1 2 3   &&  4 5 6

//  1 2 3 4 5   -->  1 2 3   &&   4 5


class Node{

    public:

    int data;
    Node *next;

    Node(int data){

        this->data = data;
        this->next = NULL;
    }

};

Node* getLastNode(Node* &head){

    if(head == NULL){
        return NULL;
    }

    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    return temp;
}


Node* getMiddleNode(Node* &head){

    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    // in odd --> middle but in even --> one before of middle
    while(fast->next->next != head && fast->next != head){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}




pair<Node*,Node*> splitCircularLL(Node* &head){


    pair<Node*,Node*> bothHead;

    if(head == NULL){// empty linked list
        bothHead.first = NULL;
        bothHead.second = NULL;
        return bothHead;
    }

    else if(head->next == head){// one element cll

        bothHead.first = head;
        bothHead.second = NULL;
        return bothHead;

    }

    Node* mid = getMiddleNode(head);//last node of first cll

    Node* last = getLastNode(head);//last node of second cll

    //first node of second cll  head2
    Node* head2 = mid->next;

    last->next = head2;// second cll ka last   head2 ko point 

    mid->next = head;// first cll ka last   head ko point

    bothHead.first = head;

    bothHead.second = head2;

    return bothHead;

}


void traverse(Node* &head){

    if(head == NULL){
        cout<<endl<<"empty linked list "<<endl;
    }

    Node* temp = head;

    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);

}






int main(){

    Node *head = new Node(1);

    Node *first = new Node(2);
    head->next = first;

    Node *second = new Node(3);
    first->next = second;

    Node *third = new Node(4);
    second->next = third;

    Node *forth = new Node(5);
    third->next = forth;
    
    Node *fifth = new Node(6);
    forth->next = fifth;
    fifth->next = head;
    
    cout<<endl<<"printing linked list : "<<endl;
    traverse(head);

    pair<Node*,Node*> bothHead;

    bothHead = splitCircularLL(head);

    Node* head1 = bothHead.first;

    Node* head2 = bothHead.second;

    cout<<endl<<"printing linked list  1  : "<<endl;
    traverse(head1);


    cout<<endl<<"printing linked list  2  : "<<endl;
    traverse(head2);



    return 0;
}