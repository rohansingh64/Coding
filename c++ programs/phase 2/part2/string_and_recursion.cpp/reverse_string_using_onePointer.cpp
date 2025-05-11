#include<iostream>
#include<string>
using namespace std;

// n = s.length()
// use n-i-1 in place of j for one pointer approach

void reverse_string(string &s,int i){

    int n = s.length();
    if(i>=n-i-1){
        return ;
    }
    swap(s[i],s[n-i-1]);
    reverse_string(s,i+1);

}

int main(){

    string s = "rohan";

    cout<<"before string s : "<<s<<endl;

    int i = 0;
    int j = s.length() - 1;

    reverse_string(s,i);

    cout<<"after reverse string s : "<<s<<endl;

    return 0;
}
