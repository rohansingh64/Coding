#include<iostream>
#include<array>
using namespace std;

// generally we not use array stl because it is also static as normal array


int main(){

    array<int,4> a = {1,2,3,4};
// declaration -> array<type,size> array_name = {....};

    int size = a.size();

    cout<<"array is : ";
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"element at 2nd index -> "<<a.at(2)<<endl; // array_name.at() function for random access at any index

    cout<<"array is empty or not -> "<<a.empty()<<endl;// array_name.empty() for to check array is empty or not in boolean type 1 or 0

    cout<<"first element -> "<<a.front()<<endl;// array_name.front() for first element

    cout<<"last element -> "<<a.back()<<endl;// array_name.back() for last element

    return 0;
}