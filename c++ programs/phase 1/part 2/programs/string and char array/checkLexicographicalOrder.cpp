#include<iostream>
#include<string.h>
using namespace std;

// upper case letters are lexicographically smaller than lower case letters;


int main(){

    string s1,s2;

    cout<<"enter s1 string : ";
    cin>>s1;

    cout<<"enter s2 string : ";
    cin>>s2;

    int res = s1.compare(s2);

    if(res == 0){
        cout<<"s1 and s2 are same "<<endl;
    }

    else if(res > 0){
        cout<<s1<<" lexicographically bigger than "<<s2<<endl;
    }
    else if(res < 0){
        cout<<s1<<" lexicographically smaller than "<<s2<<endl;
    }

    return 0;
}