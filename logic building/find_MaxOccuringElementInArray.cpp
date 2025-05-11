#include<iostream>
#include<vector>
#include<map>

using namespace std;

// we need to find element that occurs maximum times in array;



// approach ---> 

//step 1 --> create a map which stores count of each element in array
//step 2 --> find max count value using comparision with a variable max(0)
//     if count value > max update max and store key in ans variable
// in last return that ans which stores max occuring key


// function for finding max occuring element
int findMaxOccuringElement(vector<int> &arr){

    map<int,int> count;

    for(int i = 0; i < arr.size(); i++){

        count[arr[i]]++;
        
    }

    int max = 0;
    int ans = -1;

    for(auto it:count){

        if(it.second > max){
            max = it.second;
            ans = it.first;
        }
    }

    return ans;
}






int main(){

    int n;
    vector<int> arr;

    cout<<"enter array size : ";
    cin>>n;

    cout<<"enter array elements : ";
    for(int i = 0; i < n; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    cout<<"array is : ";
    for(auto element:arr){
        cout<<element<<" ";
    }cout<<endl;

    int Element = findMaxOccuringElement(arr);

    
    cout<<"maximum occuring element is : "<<Element<<endl;

    return 0;
}