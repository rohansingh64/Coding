#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int,string> m;

    m[1] = "rohan";
    m[13] = "singh";
    m[5] = "patel";

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    m.insert({2,"kumar"});

    cout<<"after insert operation -> "<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    cout<<"5 is present or not -> "<<m.count(5)<<endl;

    cout<<"10 is present or not -> "<<m.count(10)<<endl;

    m.erase(13);


    cout<<"after erase 13 operation -> "<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(2);

    cout<<"map m from iterator of 2 to end -> "<<endl;

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

    return 0;
}