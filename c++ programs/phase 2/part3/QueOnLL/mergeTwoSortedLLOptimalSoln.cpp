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


//  this approach takes no extra space     time --> O(n1+n2) total length of both ll


Node* solve(Node* &first , Node* &second){

    // now we insert every element of second into first
    // at its correct position

    Node* curr1 = first;
    Node* next1 = first->next;

    Node* curr2 = second;
    Node* next2 = NULL;

    while(next1 != NULL && curr2 != NULL){

        //case 1 --> curr2 can lie b/w curr1 & next1
        if((curr2->data >= curr1->data)&&(curr2->data <= next1->data)){

            next2 = curr2->next;//for moving curr2

            // inserting curr2 b/w curr1 & next1
            curr1->next = curr2;
            curr2->next = next1;

            // updating pointers
            curr1 = curr2;

            curr2 = next2;
        }

        //case2 --> find next possible position of curr2
        else{
            curr1 = next1;
            next1 = next1->next;
        }
    }

    // if second still have remaining elemets
    //attaching all remaining element of second with last element of first

    if(curr2 != NULL){
        curr1->next = curr2;
    }


    return first;


}



Node* mergeTwoSortedLL(Node* &head1,Node* &head2){

    Node* head = NULL;

    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    if(head1->data <= head2->data){
        //make head1 as first ll (smaller head ko) && head2 ko second
        head = solve(head1,head2);
    }
    else if(head2->data < head1->data){
        //make head2 as first ll (smaller head ko) && head1 ko second
        head = solve(head2,head1);
    }

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

void traverse(Node* &head){

    if(head == NULL){
        cout<<endl<<"empty linked list"<<endl;
        return;
    }
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }cout<<endl;
}


int main(){
    Node* head1 = new Node(3);
    insertAtEnd(head1,6);
    insertAtEnd(head1,7);
    insertAtEnd(head1,10);
    insertAtEnd(head1,17);
    
    cout<<endl<<"sorted linked list 1 : "<<endl;
    traverse(head1);

    Node* head2 = new Node(2);
    insertAtEnd(head2,3);
    insertAtEnd(head2,8);
    insertAtEnd(head2,20);
    insertAtEnd(head2,28);

    cout<<endl<<"sorted linked list 2 : "<<endl;
    traverse(head2);

    Node* head = mergeTwoSortedLL(head1,head2);

    cout<<endl<<"merged linked list : "<<endl;
    traverse(head);


    return 0;
}