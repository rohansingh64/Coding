#include<iostream>
using namespace std;

int sum(int n, int a[])
{   
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int find_pivot(int n, int a[])
{
    int leftsum = 0;
    int rightsum = sum(n,a);
    int i;
    for(i=0;i<n;i++)
    {
        rightsum = rightsum - a[i];
        if(leftsum == rightsum)
        {   
            return i;
        }
        leftsum = leftsum + a[i];
    }
    return -1;
}


int main()
{
    int n, a[100];
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"elements of array are :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int index = find_pivot(n,a);
    if(index == -1)
    {
        cout<<"pivot does not exist.";
    }
    else
    {
        cout<<"pivot index is "<<index;
    }
    return 0;
}
/*   
Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
Example 2:

Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.
Example 3:

Input: nums = [2,1,-1]
Output: 0
Explanation:
The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0       */