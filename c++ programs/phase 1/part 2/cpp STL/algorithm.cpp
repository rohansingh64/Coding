#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(8);
    v.push_back(8);
    v.push_back(11);
    v.push_back(17);

    cout<<"finding 8 -> "<<binary_search(v.begin(),v.end(),8)<<endl;// 1 yes 0 no

    cout<<"lower bound of 3 -> "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    cout<<"upper bound of 8 -> "<<upper_bound(v.begin(),v.end(),8)-v.begin()<<endl;
    
    cout<<"upper bound of 11 -> "<<upper_bound(v.begin(),v.end(),11)-v.begin()<<endl;


    int a = 3;
    int b = 5;

    cout<<"max -> "<<max(a,b)<<endl;

    cout<<"min -> "<<min(a,b)<<endl;

    cout<<"before swap  a and b -> "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"after swap  a and b -> "<<a<<" "<<b<<endl;

    string s = "rohan";
    cout<<"before reverse string s -> ";
    cout<<s;
    cout<<endl;

    reverse(s.begin(),s.end());

    cout<<"after reverse string s -> ";
    cout<<s;
    cout<<endl;

    cout<<"before rotation vector v : "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    rotate(v.begin(),v.begin()+1,v.end());

    cout<<"after rotation vector v : "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());

    cout<<"after sorting vector v : "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;



    return 0;
}