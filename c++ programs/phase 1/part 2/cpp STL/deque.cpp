#include<iostream>
#include<deque>

using namespace std;

// deque is also dynamic and it is not contiguous memory allocation like array or vector
// here operations can perform both sides

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    cout<<"deque is : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size after push 2 and 1 -> "<<d.size()<<endl;

    /*d.pop_front();
    cout<<"deque after pop front is : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl; */

    /*d.pop_back();
    cout<<"deque after pop back is : ";
    for(int i:d){
        cout<<i<<" ";
    }*/

    d.push_back(3);
    cout<<"deque after push back 3 is : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"element at index 1 -> "<<d.at(1);
    cout<<endl;

    cout<<"first element -> "<<d.front()<<endl;
    cout<<"last element -> "<<d.back()<<endl;

    cout<<"deque is empty or not -> "<<d.empty()<<endl;

    d.erase(d.begin(),d.begin()+1);// begin se ek element delete means only 2

    cout<<"deque after erase operation is : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.clear(); // all elements are deleted 

    cout<<"deque after clear operation is : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"deque is empty or not -> "<<d.empty()<<endl;

    return 0;
}