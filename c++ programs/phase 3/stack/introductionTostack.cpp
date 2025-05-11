#include<iostream>
#include<stack>
using namespace std;

// stack using stl (standard template library)

int main(){

    // creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);
    s.push(9);

    s.pop();

    cout<<"top element of stack : "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    cout<<"size of stack : "<<s.size()<<endl;    



    return 0;
}