#include<iostream>
#include<vector>
using namespace std;

double medianOfTwoSortedArray(vector<int> &nums1,vector<int> &nums2){
    
    int n1 = nums1.size();
    int n2 = nums2.size();

    vector<int> v;

    int i = 0;
    int j = 0;
    while(i<n1 && j<n2){
        if(nums1[i] <= nums2[j]){
            v.push_back(nums1[i]);
            i++;
        }
        else{
            v.push_back(nums2[j]);
            j++;
        }
    }
    while(i<n1){
        v.push_back(nums1[i]);
        i++;
    }
    while(j<n2){
        v.push_back(nums2[j]);
        j++;
    }

    double median;
    int index = (n1+n2)/2;
    if((n1+n2)&1){
        median = double(v[index]);
    }
    else{
        median = (double(v[index]) + double(v[index-1]))/2.0;
    }
    return median;
}


int main(){

    vector<int> nums1 = {1,2};

    vector<int> nums2 = {3,4};

    cout<<"vector nums1 : "<<endl;

    for(auto i:nums1){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"vector nums2 : "<<endl;

    for(auto i:nums2){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"median is : "<<medianOfTwoSortedArray(nums1,nums2)<<endl;

    return 0;
}