#include<iostream>
#include<vector>

using namespace std;

// you need to store merge array in nums1 

void merge(vector <int> &nums1 , int m , vector <int> &nums2 , int n){

    int i=0;
    int j=0;
    vector<int> v;
    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            v.push_back(nums1[i]);
            i++;
        }
        else{
            v.push_back(nums2[j]);
            j++;
        }
    }
    while(i<m){
        v.push_back(nums1[i]);
        i++;
    }
    while(j<n){
        v.push_back(nums2[j]);
        j++;
    }
    // first we need to clear nums1
    nums1.clear();
    for(int i:v){
        nums1.push_back(i);
    }

}

void print(vector<int> array){
    for(int i:array){
        cout<<i<<" ";
    }cout<<endl;
}

int main(){

    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);

    int m = nums1.size();
    cout<<"nums 1 -> ";
    print(nums1);


    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);

    int n = nums2.size();
    cout<<"nums 2 -> ";
    print(nums2);

    merge(nums1,m,nums2,n);

    cout<<"merge array -> ";
    print(nums1);

    return 0;
}