/*

Given the head of a singly linked list and two integers left and right where left <= right
reverse the nodes of the list from position left to position right, and return the reversed list.


Example 1:
Input: head = [10,20,30,40,50], left = 2, right = 4
Output: [10,40,30,20,50]

Example 2:
Input: head = [5], left = 1, right = 1
Output: [5]


*/

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

}

Node* reverse(Node* head){

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


Node* reverseBetween(Node* head, int left, int right) {

    if(left == right) return head;

    Node* dummy = new Node(-1);
    dummy->next = head;

    Node* temp1 = dummy;
    while(left != 1){
        temp1 = temp1->next;
        left--;
    }
    Node* temp2 = dummy;
    while(right != 0){
        temp2 = temp2->next;
        right--;
    }
    Node* afterRightNode = temp2->next;
    temp2->next = NULL;

    Node* leftNode = temp1->next;

    temp1->next = reverse(leftNode);
    leftNode->next = afterRightNode;

    return dummy->next;

}


int main(){

    Node *head = new Node(10);

    Node *first = new Node(20);
    head->next = first;

    Node *second = new Node(30);
    first->next = second;

    Node *third = new Node(40);
    second->next = third;

    Node *four = new Node(50);
    third->next = four;

    traverse(head);

    int left;
    int right;

    cout<<endl<<"enter left and right value : ";
    cin>>left>>right;

    head = reverseBetween(head,left,right);

    cout<<endl<<"after reverse : "<<endl;

    traverse(head);

    

    return 0;
}