#include<iostream>
#include<vector>
using namespace std;

//reverse after m

void print(vector<char> &s){
    for(auto i:s){
        cout<<i;
    }cout<<endl;
}
void reverse(vector<char> &s,int m){
    int i = m+1;
    int j = s.size()-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}



int main(){
    vector<char> s;
    s.push_back('r');
    s.push_back('o');
    s.push_back('h');
    s.push_back('a');
    s.push_back('n');
    print(s);
    int m;
    cout<<"enter m -> ";
    cin>>m;
    reverse(s,m);
    cout<<"after reverse  -> ";
    print(s);
    return 0;
}