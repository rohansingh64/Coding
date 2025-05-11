/*

A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index.
If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element 
is always considered to be strictly greater than a neighbor that is outside the array.

neighbors are not same for all array element --> nums[i] != nums[i + 1] for all valid i


Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.


*/

#include<iostream>
#include<vector>
using namespace std;


int findPeakElement_Index(vector<int>& nums) {

    int n = nums.size();
    if(n == 1) return 0;

    if(nums[0] > nums[1]) return 0;

    if(nums[n-1] > nums[n-2]) return n-1;

    int l = 1;
    int h = n-2;
    while(l<=h)
    {   
        int m = l + (h-l)/2;
        if((nums[m]>nums[m-1])&&(nums[m]>nums[m+1]))
        {
            return m;
        }
        else if(nums[m]>nums[m-1])// problem in right
        {
            l = m+1;
        }
        else
        {
            h = m-1;
        }
    }
    return -1;
    
}


int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int> nums;
    int ele;
    cout<<"enter elements of array as no neighbours are same :";
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        nums.push_back(ele);
    }
    int pi = findPeakElement_Index(nums);
    cout<<"peak index is : "<<pi;
    return 0;
}