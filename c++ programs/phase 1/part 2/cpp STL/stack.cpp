#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<string> s;

    s.push("rohan");
    s.push("singh");
    s.push("patel");

    cout<<"top element in stack -> "<<s.top()<<endl;

    s.pop();
    cout<<"top element in stack after pop  -> "<<s.top()<<endl;

    cout<<"size of stack -> "<<s.size()<<endl;

    cout<<"stack is empty or not -> "<<s.empty()<<endl;


    return 0;
}