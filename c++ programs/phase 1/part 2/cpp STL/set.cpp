#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;


    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(1);

    cout<<"set is -> ";
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    cout<<"set after erase is -> "; // it->0 ; it++ -> 1 means (1 2 3 5 6) me 2 delete
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<" 5 is present or not -> "<<s.count(5)<<endl;
    cout<<" 2 is present or not -> "<<s.count(2)<<endl;

    set<int>::iterator itr = s.find(5);
    cout<<"value present at itr -> "<<*itr<<endl;

    return 0;
}