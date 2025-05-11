#include<iostream>
using namespace std;

// here no head or first or last in circular LL
//But for a start point we named any one as head


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
        cout<<"empty circular linked list "<<endl;
        return ;
    }

    cout<<head->data<<" ";
    Node *temp = head->next;

    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
}

//in this NO head we take only for access CLL
void insertAfterElement(Node* &head,int element,int data){


    Node *ptr = new Node(data);

    //if CLL is empty
    if(head == NULL){
        head = ptr;
        head->next = head;
        return ;
    }
    //Assuming element is present
    Node *temp = head;
    while(temp->data != element){
        temp = temp->next;
    }
    ptr->next = temp->next;
    temp->next = ptr;
    
}



void deleteElement(Node* &head,int element){

    //if CLL has one element
    if(head->next == head){
        delete head;
        head = NULL;
        return ;
    }
    //Assuming element is present
    Node *temp = head;
    while(temp->next->data != element){
        temp = temp->next;
    }
    Node * ptr = temp->next;
    temp->next = temp->next->next;
    if(ptr == head){
        // here you want to delete node that you assign as head
        //so if you delete it CLL track lost
        //make any node as head
        head = ptr->next;
    }
    delete ptr;
    ptr = NULL;
    
}







int main(){

    Node *head = new Node(15);

    Node *second = new Node(24);

    head->next = second;

    Node *third = new Node(30);

    second->next = third;

    Node *fourth = new Node(33);

    third->next = fourth;

    fourth->next = head;
    
    cout<<endl<<"CLL : "<<endl;
    traverse(head);

    

    insertAfterElement(head,24,26);
    cout<<endl<<"insert 26 after 24    CLL : "<<endl;
    traverse(head);

    insertAfterElement(head,15,34);
    cout<<endl<<"insert 34 after 15    CLL : "<<endl;
    traverse(head);

    insertAfterElement(head,33,54);
    cout<<endl<<"insert 54 after 33    CLL : "<<endl;
    traverse(head);

    deleteElement(head,24);
    cout<<endl<<"delete element  24   CLL : "<<endl;
    traverse(head);

    deleteElement(head,33);
    cout<<endl<<"delete element 33   CLL : "<<endl;
    traverse(head);

    deleteElement(head,54);
    cout<<endl<<"delete element 54   CLL : "<<endl;
    traverse(head);

    deleteElement(head,15);
    cout<<endl<<"delete element 15   CLL : "<<endl;
    traverse(head);



    
    return 0;
}