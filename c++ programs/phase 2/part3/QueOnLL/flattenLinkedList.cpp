#include<iostream>
using namespace std;


/*


Problem statement
You are given a linked list containing 'n' 'head' nodes, where every node in the linked list contains two pointers:

(1) ‘next’ which points to the next node in the list

(2) ‘child’ pointer to a linked list where the current node is the head.

Each of these child linked lists is in sorted order and connected by 'child' pointer.

Your task is to flatten this linked such that all nodes appear in a single layer or level in a 'sorted order'.

*/

class Node{

    public:

    int data;
    Node* next;
    Node* child;

    Node(int data){

        this->data = data;
        this->next = NULL;
        this->child = NULL;
    }

};



Node* merge(Node* first,Node* second){

	Node* head = new Node(-1);
	Node* tail = head;

	Node* temp1 = first;
	Node* temp2 = second;

	while(temp1 != NULL && temp2 != NULL){
		if(temp1->data <= temp2->data){
			tail->child = temp1;
			tail = temp1;
			temp1 = temp1->child;
		}
		else{
			tail->child = temp2;
			tail = temp2;
			temp2 = temp2->child;
		}
	}
	while(temp1 != NULL){
		tail->child = temp1;
		tail = temp1;
		temp1 = temp1->child;
	}
	while(temp2 != NULL){
		tail->child = temp2;
		tail = temp2;
		temp2 = temp2->child;
	}
	return head->child;

}


Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head == NULL)	return head;

	Node* second = flattenLinkedList(head->next);
	
	head = merge(head,second);
	return head;
}


void traverse(Node * &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->child;
    }cout<<"NULL"<<endl;
}

int main(){
    
    Node* first = new Node(1);
    
    Node* second = new Node(8);
    first->next = second;

    Node* third = new Node(18);
    second->next = third;

    Node* fourth = new Node(29);
    third->next = fourth;
    fourth->next = NULL;

    Node* fifth = new Node(2);
    first->child = fifth;

    Node* sixth = new Node(3);
    fifth->child = sixth;

    Node* seven = new Node(10);
    second->child = seven;

    Node* eight = new Node(15);
    seven->child = eight;

    Node* nine = new Node(22);
    third->child = nine;

    first = flattenLinkedList(first);

    traverse(first);


    return 0;
}