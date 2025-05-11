#include<iostream>
#include<vector>
#include<string>

using namespace std;


int compress(vector<char> &chars){
    int i=0;
    int index = 0;
    int n = chars.size();
    while(i<n){
        int j= i+1;
        while(chars[i]==chars[j] && j<n){
            j++;
        }
        int count = j-i;
        chars[index]=chars[i];
        index++;
        if(count>1){
            string str = to_string(count);
            for(auto ch:str){
                chars[index] = ch;
                index++;
            }
        }
        i = j;
    }
    return index;
}


int main(){


    vector<char> chars;

    chars.push_back('a');
    chars.push_back('a');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('c');
    chars.push_back('d');
    chars.push_back('d');

    int ans = compress(chars);

    cout<<"size of compress char array --> "<<ans;

    return 0;

}