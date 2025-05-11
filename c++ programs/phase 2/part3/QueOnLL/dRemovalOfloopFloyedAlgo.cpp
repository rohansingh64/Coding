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


void traverse(Node* &head){

    if(head == NULL){
        cout<<endl<<"empty linked list"<<endl;
    }

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}


Node* IntersectionNode(Node* &head){


    if(head == NULL){  // empty ll --> no loop --> not need to remove
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL && fast->next != NULL){

        slow = slow->next;
        fast = fast->next->next;


        if(slow == fast){ // loop exist return intersection
            return slow;  //or return fast (same)
        }

    }
    return NULL;// no loop exist  return null

}


Node* startNodeOfLoop(Node* &head){


    if(head==NULL){
        return NULL;
    }

    Node* intersectionNode = IntersectionNode(head);

    if(intersectionNode == NULL){
        return NULL;  // no loop no intersection no start of loop
    }

    Node* slow = head;
    Node* fast = intersectionNode;

    while(slow != fast){

        slow = slow->next;
        fast = fast->next;
    }

    return slow;

}


Node * removeLoop(Node* &head){

    if(head == NULL){
        return head;
    }

    Node* start = startNodeOfLoop(head);

    if(start == NULL){// no loop --> no start --> not need to remove loop
        return head;
    }

    Node* temp = start;

    while(temp->next != start){
        temp = temp->next;
    }
    // in temp --> last node of loop

    temp->next = NULL;

    return head;
}








int main(){


    Node *head = new Node(1);

    Node *second = new Node(2);

    head->next = second;

    Node *third = new Node(3);

    second->next = third;

    Node *fourth = new Node(4);

    third->next = fourth;

    Node *fifth = new Node(5);

    fourth->next = fifth;

    Node *sixth = new Node(6);

    fifth->next = sixth;

    sixth->next = third;

    //traverse(head);  gives infinite element because of loop
    head = removeLoop(head);
    traverse(head);


    return 0;
}