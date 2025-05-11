#include<iostream>
#include<vector>

using namespace std;

vector<int> reverseArray(vector<int> &arr, int m){
    int i=m+1;
    int j=arr.size()-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return arr;
    
}

int main(){

    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    int m;

    cout<<"enter m value : ";
    cin>>m;

    vector<int> v = reverseArray(arr,m);

    cout<<"arr after reverse : v->  ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
    
}