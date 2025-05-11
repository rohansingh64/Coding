#include<iostream>
#include<queue>

using namespace std;

int main(){

    // max_heap
    priority_queue<int> maxi;

    //min_heap
    priority_queue<int, vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(0);
    maxi.push(2);

    cout<<"size of maxi -> "<<maxi.size()<<endl;

    int n = maxi.size();
    cout<<"maxi : ";
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(1);
    mini.push(3);
    mini.push(0);
    mini.push(2);


    cout<<"size of mini -> "<<mini.size()<<endl;

    int m = mini.size();
    cout<<"mini : ";
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"mini is empty or not -> "<<mini.empty()<<endl;

    return 0;
}