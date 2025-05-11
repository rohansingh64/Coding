/*

Given an integer array nums sorted in non-decreasing order,
return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]



*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int i = 0;
    int n = nums.size();
    int j = n-1;
    vector<int> output;
    while(i <= j){
        if(abs(nums[i]) > abs(nums[j])){
            output.push_back(nums[i]*nums[i]);
            i++;
        }
        else{
            output.push_back(nums[j]*nums[j]);
            j--;
        }
    }
    reverse(output.begin(),output.end());
    return output;
}


int main()
{
    int n;
    vector<int> nums;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter elements of array :";
    int ele;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        nums.push_back(ele);
    }
    cout<<"unsorted array : \n";
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<"  ";
    }
    cout<<endl;
    vector<int> ans;
    ans = sortedSquares(nums);
    cout<<"sorted array of squares : \n";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<"  ";
    }
}