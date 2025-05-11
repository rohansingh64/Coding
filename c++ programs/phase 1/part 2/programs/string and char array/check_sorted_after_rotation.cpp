

//  here we check is possible for an array is sorted or not after some rotations

#include<iostream>
#include<vector>

using namespace std;
/*  this method is also good but very large methed 

//////////////////////   approach 1   /////////////////////////////########

bool is_sorted(vector<int> &v){
    int m = v.size();
    for(int i=0;i<m-1;i++){
        if(v[i]>v[i+1]){
            return false;
        }
    }
    return true;
}

bool check(vector<int> &nums){
    int n = nums.size();
    vector<int> v(n);
    // here we take k=0 because array is already sorted also -> so without rotate we need to check
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            v[(i+k)%n] = nums[i];
        }
        if(is_sorted(v)){
            return true;
        }
    }
    return false;
}

*/  

///////////////////   approach2  ///////////////#########

bool check(vector<int> &nums){

    int n = nums.size();
    int count = 0;
    for(int i=0;i<=n-2;i++){
        if(nums[i]>nums[i+1]){
            count++;
        }
    }
    if(nums[n-1]>nums[0]){
        count++;
    }

    return(count<=1);
}




int main(){

    vector<int> nums;

    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(2);

    /*nums.push_back(2);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);*/


    bool c = check(nums);

    cout<<"possible or not -> "<<c;

    return 0;
}