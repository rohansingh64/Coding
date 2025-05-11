#include<iostream>
#include<vector>

using namespace std;

// capacity shows how much memory assign to vector

// size shows the element size of vector(no of element in vector)

// if size is full and a new element comes then by default capacity gets doubled 

int main(){
    vector<int> v; // its capacity in memory is zero till now
    cout<<"capacity -> "<<v.capacity()<<endl;
    int n = 5;
    vector<int> a(n,1); // here we give size as 5 and all 5 elements as 1
    cout<<"print a : ";
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    // coping all elements of vector a into vector b -->

    vector<int> b(a);

    cout<<"print b : ";
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    v.push_back(1);

    // vector_name.push_back(element)  -> is used for inserting element in last in vector

    cout<<"capacity -> "<<v.capacity()<<endl; // capacity -> 1

    v.push_back(2);
    cout<<"capacity -> "<<v.capacity()<<endl; // capacity -> 2 (double)

    v.push_back(3);
    cout<<"capacity -> "<<v.capacity()<<endl; // capacity -> 4 (double again)

    cout<<"size -> "<<v.size()<<endl; // size -> 3 because 3 elements present in vector 

    cout<<"element at 2nd index -> "<<v.at(2)<<endl; // vector_name.at() function for random access at any index

    cout<<"first element -> "<<v.front()<<endl;// vector_name.front() for first element

    cout<<"last element -> "<<v.back()<<endl;// vector_name.back() for last element

    // for printing vector small method also used 

    cout<<"vector elements : ";
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    // like push_back we have pop_back() used for deleting element from last in vector

    v.pop_back();

    cout<<"vector elements after pop : ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //clear is used for clearing all elements from vector
    // note after clear size becomes zero but capacity remains as it is!


    cout<<"size before clear -> "<<v.size()<<endl;
    v.clear();
    cout<<"size after clear -> "<<v.size()<<endl;


    return 0;
}