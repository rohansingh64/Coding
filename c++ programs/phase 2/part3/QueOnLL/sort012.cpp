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

// first approach --> simply count all 0 1 and 2 then replace 0 then 1 then 2 with data of original ll 
Node* sort012firstApproach(Node* &head){

    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    Node* temp = head;
    while(temp != NULL){

        if(temp->data == 0){//count all zeroes
            countZero++;
        }
        else if(temp->data == 1){//count all ones
            countOne++;
        }
        else{               // count all twoes
            countTwo++;
        }

        temp = temp->next;

    }

    temp = head;
    while(countZero){     // first replace data with all 0
        temp->data = 0;
        countZero--;
        temp = temp->next;
    }
    while(countOne){    // then replace data with all 1
        temp->data = 1;
        countOne--;
        temp = temp->next;
    }
    while(countTwo){     // then replace data with all 2
        temp->data = 2;
        countTwo--;
        temp = temp->next;
    }

    return head;

}


// second approach --> if data replacement not allowed
//simply identify node data then insert that node to that data ll like node 0 --> insert node into 0 ll
// at last merge all 3 ll into one ll

void linkNodetoTail(Node* &tail,Node* &temp){

    tail->next = temp;
    tail = temp;

}




Node* sort012secondApproach(Node* &head){

    // we create dummy head nodes for merging all ll easily in last

    Node* Zerohead = new Node(-1);
    Node* Zerotail = Zerohead;

    Node* Onehead = new Node(-1);
    Node* Onetail = Onehead;

    Node* Twohead = new Node(-1);
    Node* Twotail = Twohead;


    Node* temp = head;
    while(temp != NULL){

        if(temp->data == 0){
            linkNodetoTail(Zerotail,temp);
        }
        else if(temp->data == 1){
            linkNodetoTail(Onetail,temp);
        }
        else{
            linkNodetoTail(Twotail,temp);
        }

        temp = temp->next;
    }

    // merge all 3 linked list   (0--->1---->2)  
    //(if no of one is Zero (no one exist) then in palce of 1 -> null)
    // and 0 and 2 is not connected by null(not possible)


    // merging all 3 ll

    if(Onehead->next == NULL){// if there is no one then 0 and 2 directly connect
        Zerotail->next = Twohead->next;
    }
    else{      // else 0 connected with 1
        Zerotail->next = Onehead->next;
    }

    Onetail->next = Twohead->next;
    Twotail->next = NULL;


    
    return Zerohead->next;

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

    Node* head = new Node(0);

    Node* second = new Node(2);

    head->next = second;

    Node* third = new Node(2);

    second->next = third;

    Node* fourth = new Node(1);

    third->next = fourth;

    Node* fifth = new Node(0);

    fourth->next = fifth;

    cout<<endl<<"before sort : "<<endl;
    traverse(head);

    //head = sort012firstApproach(head);

    head = sort012secondApproach(head);

    cout<<endl<<"after sort : "<<endl;
    traverse(head);

    return 0;
}