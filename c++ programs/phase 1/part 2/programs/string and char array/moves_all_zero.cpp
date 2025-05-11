#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int> &nums){

        int i = 0;
        int j = 0;
        while(j<nums.size()){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }

}

int main(){

    vector<int> nums;

    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);

    cout<<"Input: nums = [";
    for(int i:nums){
        cout<<i<<",";
    }cout<<"]"<<endl;

    moveZeroes(nums);

    cout<<"Output: [";
    for(int i:nums){
        cout<<i<<",";
    }cout<<"]"<<endl;

    return 0;
}