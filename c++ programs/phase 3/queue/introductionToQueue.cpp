#include<iostream>
#include<queue>
using namespace std;


//  push --> enqueue  ---> to rear (back)

// pop -->  deque  --->  from front


int main(){

    queue<int> q;

    cout<<"q is empty or not "<<q.empty()<<endl;

    q.push(17);
    q.push(37);
    q.push(46);
    q.push(20);
    q.push(43);
    q.push(56);

    cout<<"q is empty or not "<<q.empty()<<endl;

    q.pop();

    cout<<"front of q "<<q.front()<<endl;
    cout<<"rear of q "<<q.back()<<endl;

    cout<<"size of q "<<q.size()<<endl;

    q.pop();

    q.push(98);
    q.push(83);
    
    cout<<"front of q "<<q.front()<<endl;
    cout<<"rear of q "<<q.back()<<endl;


    return 0;
}