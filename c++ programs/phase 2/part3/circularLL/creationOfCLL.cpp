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


int main(){

    Node *head = new Node(15);

    Node *second = new Node(24);

    head->next = second;

    Node *third = new Node(25);

    second->next = third;

    Node *fourth = new Node(33);

    third->next = fourth;

    fourth->next = head;
    
    
    traverse(head);



    return 0;
}