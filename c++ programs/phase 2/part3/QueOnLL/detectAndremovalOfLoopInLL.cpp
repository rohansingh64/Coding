#include<iostream>
#include<map>
using namespace std;



// here we detect loop and find start node of loop

// and remove loop if it present




class Node{

    public:

    int data;
    Node *next;

    Node(int data){

        this->data = data;
        this->next = NULL;
    }

};

bool IsloopExist(Node* &head){ // detect loop

    if(head == NULL){
        return false;   // assuming empty list not contain loop
    }

    map <Node* , bool> visited;

    Node* temp = head;
    visited[head] = true;

    while(temp->next != NULL && visited[temp->next] != true){

        visited[temp->next] = true;
        temp = temp->next;

    }
    if(temp->next == NULL){
        return false;
    }
    if(visited[temp->next] == true){

        cout<<"start node of loop -> "<<temp->next->data<<endl;// start node of loop

        cout<<"last node of loop -> "<<temp->data<<endl;//last node of loop

        // removing loop
        //last node of loop ke next pr null
        temp->next = NULL;
        
        return true;
    }

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



    bool ans2 = IsloopExist(head);
    cout<<endl<<"after removing loop  "<<endl;

    if(ans2){
        cout<<"linked list contain a loop "<<endl;
    }
    else{
        cout<<"linked list not contain loop "<<endl;
    }



    return 0;
}