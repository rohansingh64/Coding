#include<iostream>
using namespace std;
#include<map>

// remove duplicate from sorted linked list

//  ---->   4  1  2  4  5  2  6  2  3




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
        cout<<endl<<"empty linked list "<<endl;
    }

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;

}


Node* removeDuplicateFromUnSortedLL1(Node* &head){

// brute force approach --> takes O(n^2) time and O(1) space


    if(head == NULL){
        return head;
    }

    Node* temp1 = head;

    while(temp1->next != NULL){

        Node* temp2 = temp1;

        while(temp2->next != NULL){

            if(temp1->data != temp2->next->data){
                temp2 = temp2->next;
            }
            else{
                Node* ptr = temp2->next;
                temp2->next = ptr->next;
                delete ptr;
                ptr = NULL;
            }

        }
        temp1 = temp1->next;
    }
    return head;
}




Node* removeDuplicateFromUnSortedLL2(Node* &head){

// optimal approach using map --> takes O(n) time and O(n) space


    if(head == NULL){
        return head;
    }

    map<int,bool> visitedData;

    Node* temp = head;

    visitedData[head->data] = true;

    while(temp->next != NULL){

        if(visitedData[temp->next->data] == false){ // not visited data

            visitedData[temp->next->data] = true;

            temp = temp->next;

        }

        else{  // visited data (means duplicate)

            Node* ptr = temp->next;

            temp->next = ptr->next;

            delete ptr;
            ptr = NULL;

        }
    }
    return head;
}



int main(){

    Node *head = new Node(4);

    Node *first = new Node(2);
    head->next = first;

    Node *second = new Node(5);
    first->next = second;

    Node *third = new Node(4);
    second->next = third;

    Node *forth = new Node(2);
    third->next = forth;

    Node *fifth = new Node(2);
    forth->next = fifth;

    Node *sixth = new Node(6);
    fifth->next = sixth;

    Node *seventh = new Node(2);
    sixth->next = seventh;

    Node *eighth = new Node(2);
    seventh->next = eighth;


    cout<<endl<<"before removal : "<<endl;
    traverse(head);

    head = removeDuplicateFromUnSortedLL2(head);

    cout<<endl<<"after removal : "<<endl;
    traverse(head);
    

    return 0;
}