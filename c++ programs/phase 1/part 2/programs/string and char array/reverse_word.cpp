#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<char> &v){
    for(auto i:v){
        cout<<i;
    }cout<<endl;
}

void reverse(vector<char> &s,int i,int j){
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}

void reverseWords(vector<char> &s){

    int last = s.size()-1;
    reverse(s,0,last);
    int i=0;
    int j=0;
    while(j<last){
        if(s[j]==' '){
            reverse(s,i,j-1);
            i=j+1;
        }
        j++;
    }
    reverse(s,i,last);
}

int main(){

    vector<char> s = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};

    print(s);

    reverseWords(s);

    print(s);

    return 0;

}