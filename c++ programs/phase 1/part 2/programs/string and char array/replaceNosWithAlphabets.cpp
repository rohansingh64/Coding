/*

question -->

arr[] = { 10 , 73 , 5 , 20 }    // size of arr can be  1 to 26  all elements are unique

replace array elements with alphabets in such way 

like smallest no replace with 'a'  then second smallest with 'b'
 and then 3rd smallest with 'c'  and so on

 ch[] = { 'b' , 'd' , 'a'  'c' }  is the answer for above arr

*/

#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;


vector<char>  getAlphabetArray(vector<int> &arr){

    vector<int> sortedArr;
    for(int i=0;i<arr.size();i++){
        sortedArr.push_back(arr[i]);
    }
    sort(sortedArr.begin(),sortedArr.end());

    map<int,char> m;

    for(int i=0;i<sortedArr.size();i++){
        m[sortedArr[i]] = (char)('a' + i);
    }
    vector<char> ch(arr.size());

    for(int i=0;i<arr.size();i++){
        ch[i] = m[arr[i]];
    }
    return ch;
}


int main(){

    int n;
    vector<int> arr;

    cout<<"enter size of array (1 to 26) : ";
    cin>>n;

    cout<<"enter unique elements of array : ";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    cout<<"elements of array is : ";
    for(auto i:arr){
        cout<<i<<" ";
    }cout<<endl;

    vector<char> ans;
    ans = getAlphabetArray(arr);

    cout<<"alphabet array is :"<<endl;
    for(auto ch:ans){
        cout<<ch<<" ";
    }cout<<endl;

    return 0;
}