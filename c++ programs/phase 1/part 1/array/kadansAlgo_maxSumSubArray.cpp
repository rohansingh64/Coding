#include<iostream>
#include<vector>
using namespace std;

void printarray(int n,vector<int> nums)
{
    cout<<"all elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<",";
    }
}


int maxSubArray(vector<int>& nums) {

    int maxsum = nums[0];
    int currentsum = 0;

    for(int i=0;i<nums.size();i++){

        currentsum = currentsum + nums[i];
        maxsum = max(maxsum,currentsum);

        if(currentsum < 0){
            currentsum = 0;
        }

    }
    return maxsum;
}

int main()
{
    int i,n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> nums;
    cout<<"enter all elements : ";
    for(i=0;i<n;i++)
    {   
        int element;
        cin>> element;
        nums.push_back(element);
    }
    printarray(n,nums);
    cout<<endl;
    int maxSum = maxSubArray(nums);
    cout<<"max sum is : "<<maxSum;
    cout<<endl;
    return 0;
}