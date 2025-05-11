#include<iostream>
#include<map>
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

bool IsloopExist(Node* &head){ // detect loop by floyd loop detection algorithm

    if(head == NULL){
        return true;   // assuming empty list circular
    }

    Node* fast = head;

    Node* slow = head;

    while(slow != NULL && fast != NULL && fast->next != NULL){
        
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cout<<endl<<slow->data<<endl;
            return true;
        }
    }

    return false;

}



int main(){

    Node *head = new Node(1);

    Node *second = new Node(2);

    head->next = second;

    Node *third = new Node(3);

    second->next = third;

    Node *fourth = new Node(4);

    third->next = fourth;

    Node *fifth = new Node(5);

    fourth->next = fifth;

    Node *sixth = new Node(6);

    fifth->next = sixth;

    sixth->next = third;

    
    
    
    bool ans1 = IsloopExist(head);

    if(ans1){
        cout<<"linked list contain a loop "<<endl;
    }
    else{
        cout<<"linked list not contain loop "<<endl;
    }


    return 0;
}