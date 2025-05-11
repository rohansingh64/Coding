#include<iostream>
#include<list>

using namespace std;

int main(){
    // we cant use at() function in list 
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    cout<<"list l is : ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size after push 2 and 1 -> "<<l.size()<<endl;

    // coping list l to list n

    list<int> n(l);

    cout<<"list n is : ";
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());// begin element delete means only 2

    cout<<"list l after erase operation is : ";
    for(int i:l){
        cout<<i<<" ";
    }

    return 0;
}