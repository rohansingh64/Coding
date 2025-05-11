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

void traverse(Node * &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}



Node* findmid(Node* head){// first mid in even


    Node* slow = head;
    Node* fast = head;

    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}



Node* merge(Node* head1,Node* head2){

    Node* head = new Node(-1);
    Node* tail = head;

    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->data <= temp2->data){
            tail->next = temp1;
            tail = temp1;
            temp1 = temp1->next;

        }
        else{
            tail->next = temp2;
            tail = temp2;
            temp2 = temp2->next;

        }
    }
    while(temp1 != NULL){
        
        tail->next = temp1;
        tail = temp1;
        temp1 = temp1->next;

    }
    while(temp2 != NULL){
        
        tail->next = temp2;
        tail = temp2;
        temp2 = temp2->next;

    }
    return head->next;
}


Node* mergesort(Node* head){

    //base case 
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* mid = findmid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    left = mergesort(left);
    right = mergesort(right);

    Node* ans = merge(left,right);
    return ans;

}




int main(){

    Node* first = new Node(10);
    
    Node* second = new Node(8);
    first->next = second;

    Node* third = new Node(13);
    second->next = third;

    Node* fourth = new Node(14);
    third->next = fourth;

    Node* fifth = new Node(5);
    fourth->next = fifth;
    fifth->next = NULL;

    cout<<"before sorting linked list : "<<endl;
    traverse(first);

    Node* head = mergesort(first);

    cout<<"after sorting linked list : "<<endl;
    traverse(head);
    
    
    


    return 0;
}