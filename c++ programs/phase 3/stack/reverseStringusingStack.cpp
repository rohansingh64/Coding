#include<iostream>
#include<stack>

using namespace std;

string reverseStringUsingStack(string s){

    stack<char> st;

    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }

    string ans = "";

    while(st.empty() == false){
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main(){

    string s = "rohan";

    cout<<"string s before reverse : "<<s<<endl;

    string ans =  reverseStringUsingStack(s);

    cout<<"string s after reverse : "<<ans<<endl;

    return 0;
}