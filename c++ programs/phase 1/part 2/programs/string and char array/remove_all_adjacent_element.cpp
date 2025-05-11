#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string s) {
        string temp = "";
        for(auto i : s){
            if(temp.empty()){
                temp.push_back(i);
            }
            else if(temp.back()==i){
                temp.pop_back();
            }
            else{
                temp.push_back(i);
            }
        }
        return temp;
}

int main(){
    string s = "azxxzy";
    string str = removeDuplicates(s);
    cout<<"after remove -- > "<<str;
    return 0;

}