#include<iostream>
#include<map>
using namespace std;

class Node{

    public:

    int data;
    Node* next;
    Node* random;

    Node(int data){

        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
};


void insertAtTail(Node* &head,Node* &tail,int data){
    Node* ptr = new Node(data);

    if(head == NULL){
        head = ptr;
        tail = ptr;
        return;
    }
    tail->next = ptr;
    tail = ptr;
}


Node* cloneLinkedList(Node* &original){

    //  step 1 -->   clone list with using next pointer only

    Node* temp = original;

    Node* clone = NULL;
    Node* tail = NULL;

    while(temp != NULL){
        insertAtTail(clone,tail,temp->data);
        temp = temp->next;
    }
    
    // step 2 -->  create a map for mapping original ll to clone ll
    //   map every node of original ll to corresponding clone list node

    map<Node*,Node*> m;

    Node* temp1 = original;
    Node* temp2 = clone;

    while(temp1 != NULL  &&  temp2 != NULL){

        m[temp1] = temp2;

        temp1 = temp1->next;
        temp2 = temp2->next;

    }

    // step 3 -->  links random pointers in clone ll using map

    temp1 = original;
    temp2 = clone;

    while(temp1 != NULL  &&  temp2 != NULL){

        temp2->random = m[temp1->random];

        temp1 = temp1->next;
        temp2 = temp2->next;

    }

    return clone;

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

    Node* first = new Node(1);
    
    Node* second = new Node(2);
    first->next = second;

    Node* third = new Node(3);
    second->next = third;

    Node* fourth = new Node(4);
    third->next = fourth;

    Node* fifth = new Node(5);
    fourth->next = fifth;
    fifth->next = NULL;

    first->random = third;
    second->random = first;
    third->random = fifth;
    fourth->random = second;
    fifth->random = third;

    cout<<endl<<"original linked list: "<<endl;
    traverse(first);

    Node* clone = cloneLinkedList(first);

    cout<<endl<<"clone linked list: "<<endl;
    traverse(clone);

    // for checking random pointers in clone 
    
    cout<<clone->random->random->data<<endl;
    cout<<clone->random->next->data<<endl;
    cout<<clone->random->random->next<<endl;


    return 0;
}