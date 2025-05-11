#include<iostream>
using namespace std;

/*
int linear_search(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
*/

int binary_search(int a[],int n,int x){
    int low = 0;
    int high = n-1;
    int mid = (low+high)/2;
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]>x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    int a[100],n,x;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array elements are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"enter search element : ";
    cin>>x;
    cout<<endl;
    int index = binary_search(a,n,x);
    if(index==-1){
        cout<<x<<" is not found";
    }
    else{
        cout<<x<<" is found at index "<<index;
    }
    return 0;
}