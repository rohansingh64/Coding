#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_array(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
/*  takes O(n^3) time

void find_index(int a[],int n,int target){
    for(int i=0;i<=n-3;i++){
        for(int j=i+1;j<=n-2;j++){
            for(int k=j+1;k<=n-1;k++){
                if(a[i]+a[j]+a[k] == target){
                    cout<<"["<<i<<","<<j<<","<<k<<"]";
                }
            }
        }
    }
}
*/

//  optimal approach  --> takes O(n^2)


vector<vector<int>> find_index(int arr[],int n,int target){

    sort(arr,arr+n);// takes nlogn time for sorting

    vector<vector<int>> ans;
    set<vector<int>> s;

    for(int index = 0; index <= n-3; index++){

        int i = index+1;
        int j = n-1;
        while(i<j){
            if(arr[i] + arr[j] == target - arr[index]){
                
                s.insert({arr[index],arr[i],arr[j]});//use set for storing unique answers only
                i++;
                j--;
            }
            else if(arr[i] + arr[j] < target - arr[index]){
                i++;
            }
            else if(arr[i] + arr[j] > target - arr[index]){
                j--;
            }
        }
    }

    for(auto i:s){
        ans.push_back(i);
    }

    return ans;

}


int main(){
    int a[100],n,target;

    cout<<"enter size of array : ";
    cin>>n;

    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"array elements are : ";
    print_array(a,n);

    cout<<"enter target value : ";
    cin>>target;

    vector<vector<int>> ans = find_index(a,n,target);


    for(int i=0;i<ans.size();i++){
        cout<<"elements are : ";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" , ";
        }
        cout<<endl;
    }

    return 0;
}