#include<iostream>
#include<vector>
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






// approach 1 -->  copy all data of ll into array and check for array palindrome
// takes O(n) time.complexity && O(n) space.complexity

bool arrayPalindrome(vector<int> arr);//forward declaration of function

bool Ispalindrome1(Node* &head){

    if(head == NULL || head->next == NULL){
        return true;
    }

    vector<int> arr;

    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return arrayPalindrome(arr);
}

bool arrayPalindrome(vector<int> arr){

    int n = arr.size();

    int i = 0;
    int j = n-1;

    while(i<j){
        if(arr[i] != arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;

}







// approach 2  -->  reverse ll after middle & compare first half with second half
// takes O(n) time.complexity && O(1) space.complexity



//forward declaration of functions
Node* findMiddle(Node* &head);
Node* reverse(Node* &head);



bool Ispalindrome2(Node* &head){


    if(head == NULL || head->next == NULL){
        return true;
    }

    // 1st step ---->   find middle         

    Node* mid = findMiddle(head);

    // 2nd step ----> reverse after middle

    Node* temp2 = reverse(mid->next);

    // 3rd step  ---> compare both half part

    Node* temp1 = head;

    while(temp2 != NULL){

        if(temp1->data != temp2->data){
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}

Node* findMiddle(Node* &head){

    Node* slow = head;
    Node* fast = head;

    // ODD -->  1 2 3 2 1 (3)===> middle  ------->  fast->next != NULL
    // EVEN -->  1 2 3 3 2 1 (1st 3)===> first middle  ------->  fast->next->next != NULL

    while(fast->next != NULL && fast->next->next != NULL){

        slow = slow->next;
        fast = fast->next->next;

    }

    return slow;
}


Node* reverse(Node* &head){

    Node* before = NULL;
    Node* current = head;
    Node* after = NULL;

    while(current != NULL){

        after = current->next;


        current->next = before;

        //update pointers
        before = current;
        current = after;

    }
    return before;

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

int main(){
    Node* head = new Node(3);
    insertAtEnd(head,6);
    insertAtEnd(head,7);
    insertAtEnd(head,7);
    insertAtEnd(head,6);
    insertAtEnd(head,3);
    
    //bool ans = Ispalindrome1(head);

    bool ans = Ispalindrome2(head);

    if(ans){
        cout<<endl<<"linked list is a palindrome "<<endl;
    }
    else{
        cout<<endl<<"linked list is not a palindrome "<<endl;
    }


    return 0;
}