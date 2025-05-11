#include<iostream>
using namespace std;


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
    cout<<endl;
}



Node* reverseInKgroup(Node* &head , int k){

    //base case
    if(head == NULL){
        return head;
    }


    // reverse first k elements
    int count = 0;
    Node* before = NULL;
    Node* current = head;
    Node* after = NULL;
    
    while(current != NULL && count < k){//reverse k element if element < k (then only remaining)
        
        after = current->next;

        current->next = before;

        before = current;
        current = after;

        count++;


    }

    //recursive call for remaining element
    head->next = reverseInKgroup(current,k);
    // remaining part reverse hokr aayega uska head first k element ke last elemnet ke bad jud jaega
    
    //returning last element of first k element as head
    return before;

}



int main(){


    Node *head = new Node(12);

    Node *first = new Node(18);
    head->next = first;

    Node *second = new Node(20);
    first->next = second;

    Node *third = new Node(30);
    second->next = third;

    Node *fourth = new Node(38);
    third->next = fourth;

    Node *fifth = new Node(40);
    fourth->next = fifth; 

    traverse(head);

    head = reverseInKgroup(head,3);

    traverse(head);

    return 0;
}