#include<iostream>
#include<vector>
#include<set>
#include<map>

using namespace std;



// problem statement -->
// if occurences(count) of all elements are unique then return true
// else false

//example -->   1 2 2 2 4 4 5 1 1 2  
//             (here 1-->count = 3)
//             (here 2-->count = 4)
//             (here 4-->count = 2)
//             (here 5-->count = 1) 
//   all are different (3 4 2 1) return true  if any two same return false




bool IsUniqueOccurences(vector<int> &arr){

    // make a map for storing count
    map<int,int> count;

    for(auto element:arr){
        count[element]++;
    }
    set<int> s;
    for(auto it:count){
        int value = it.second;

        // checking that value is present in set s or not using count function
        
        if(s.count(value) == false){// not present then insert
            s.insert(value);
        }
        else{// value already present  --> not unique occurence
            return false;
        }
    }
    return true;

}





int main(){

    int n;

    vector<int> arr;

    cout<<"enter n : ";
    cin>>n;

    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    cout<<"array elements are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    bool ans = IsUniqueOccurences(arr);

    if(ans){
        cout<<"occurences of all elements are unique";
    }
    else{
        cout<<"occurences of all elements are not unique";
    }



    return 0;
}