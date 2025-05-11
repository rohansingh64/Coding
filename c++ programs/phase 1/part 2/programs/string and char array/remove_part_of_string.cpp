#include<iostream>
#include<string>
using namespace std;

string remove_part_of_string(string str,string part){

    while(str.find(part)<str.length() && str.length()!=0){
        str.erase(str.find(part),part.length());
    }
    return str;
}

int main(){

    string str;
    cout<<"enter string -> ";
    cin>>str;
    string part;
    cout<<"enter string part to remove -> ";
    cin>>part;
    
    cout<<"string after remove all occurence of part -> "<<remove_part_of_string(str,part);

    return 0;
}