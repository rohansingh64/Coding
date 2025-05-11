#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("rohan");
    q.push("singh");
    q.push("patel");

    cout<<"first element in queue -> "<<q.front()<<endl;

    q.pop();
    cout<<"top element in queue after pop  -> "<<q.front()<<endl;

    cout<<"size of queue -> "<<q.size()<<endl;

    cout<<"queue is empty or not -> "<<q.empty()<<endl;


    return 0;
}