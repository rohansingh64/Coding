#include<iostream>
#include<string>
using namespace std;

void reverse_string(string &s,int i,int j){

    if(i>=j){
        return ;
    }
    swap(s[i],s[j]);
    reverse_string(s,i+1,j-1);

}

int main(){

    string s = "rohan";

    cout<<"before string s : "<<s<<endl;

    int i = 0;
    int j = s.length() - 1;

    reverse_string(s,i,j);

    cout<<"after reverse string s : "<<s<<endl;

    return 0;
}
