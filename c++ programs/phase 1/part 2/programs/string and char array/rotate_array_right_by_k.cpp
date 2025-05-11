#include<iostream>
#include<vector>

using namespace std;

/*  this solution gives memory limit exceed 
void rotate(vector<int> &nums,int k){
    for(int i=1;i<=k;i++){
        int n = nums.size();
        int temp = nums[n-1];
        for(int j=n-2;j>=0;j--){
            nums[j+1] = nums[j];
        }
        nums[0] = temp;
    }
}
*/

void rotate(vector<int> &nums,int k){
    int n = nums.size();
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[(i+k)%n] = nums[i];
    }
    nums.clear();
    for(int i:v){
        nums.push_back(i);
    }
}

void print(vector<int> &arr){
    for(int i:arr){
        cout<<i<<",";
    }cout<<endl;
}

int main(){

    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);

    cout<<"nums before rotate -> ";
    print(nums);

    int k = 3;

    rotate(nums,k);

    cout<<"nums after rotate -> ";
    print(nums);

    return 0;
}