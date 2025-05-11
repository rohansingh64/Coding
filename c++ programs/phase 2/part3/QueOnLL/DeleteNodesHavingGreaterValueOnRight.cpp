#include<iostream>
#include<vector>
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
// question -->  delete all nodes which have a greater value node on its right

// approach -->  reverse ll then delete those value which are smaller from its left node


Node* reverse(Node* &head){

    Node* before = NULL;
    Node* current = head;
    Node* after = NULL;

    while(current != NULL){

        after = current->next;


        current->next = before;

        //update pointers
        before = current;
        current = after;

    }
    return before;

}




Node* DeleteNodesHavingGreaterValueOnRight(Node *head) {
    // your code goes here
    if(head == NULL || head->next == NULL){
        return head;
    }
    // first step --> reverse
    head = reverse(head);

    Node* current = head;
    while(current->next != NULL){
        if(current->next->data < current->data ){// delete node which is smaller than its left node
            current->next = current->next->next;
        }
        else{
            current = current->next;
        }
    }

    head = reverse(head);
    return head;

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

void traverse(Node * &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}


int main(){
    Node* head = new Node(3);
    insertAtEnd(head,20);
    insertAtEnd(head,17);
    insertAtEnd(head,7);
    insertAtEnd(head,8);
    insertAtEnd(head,6);
    
    cout<<endl<<"linked list before deletion : "<<endl;
    traverse(head);

    head = DeleteNodesHavingGreaterValueOnRight(head);

    cout<<endl<<"linked list after deletion : "<<endl;
    traverse(head);

    


    return 0;
}