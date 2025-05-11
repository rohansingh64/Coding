#include<iostream>
using namespace std;

// write code for find middle of a LL  (odd = middle  even = middle farther from head)

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



Node* middle2(Node* &head){

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL){

        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}








Node* middle1(Node* &head){

    Node* temp = head;

    int count = 0; 

    while(temp != NULL){

        temp = temp->next;
        count++;
    }
    
    int midcount = count/2 + 1;

    temp = head;

    for(int i=1;i<midcount;i++){

        temp = temp->next;
    }

    return temp;
}




int main(){

    Node *head = new Node(12);

    Node *first = new Node(18);
    head->next = first;

    Node *second = new Node(20);
    first->next = second;

    Node *third = new Node(30);
    second->next = third;

   // Node *fourth = new Node(38);
    //third->next = fourth;

    traverse(head);

    Node* midnode = middle2(head);

    cout<<endl<<"middle node is : "<<midnode->data<<endl;
    

    return 0;
}