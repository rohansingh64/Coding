#include<iostream>
#include<string>
using namespace std;

char get_max_occuring_char(string s){
    int count[26]={0};
    int n = -1;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            n = s[i] - 'a';
        }
        if(s[i]>='A' && s[i]<='Z'){
            n = s[i] - 'A';
        }
        count[n] = count[n] + 1;
    }

    int maxi = -1;
    int ans = -1;

    for(int i=0;i<26;i++){
        if(count[i]>maxi){
            ans = i;
            maxi = count[i];
        }
    }

    
    return char(ans+'a');

}

int main(){
    string s;
    cout<<"enter s -> ";

    cin>>s;

    cout<<s; 

    cout<<"max occured charector is -> "<<get_max_occuring_char(s);


    return 0;
}