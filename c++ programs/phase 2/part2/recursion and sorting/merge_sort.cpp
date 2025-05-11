#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int l,int m,int h){
    int i = l;
    int j = m+1;
    
    vector<int> v;

    while(i<=m && j<=h){
        if(arr[i]<=arr[j]){
            v.push_back(arr[i]);
            i++;
        }
        else{
            v.push_back(arr[j]);
            j++;
        }
    }

    while(i<=m){
        v.push_back(arr[i]);
        i++;
    }

    while(j<=h){
        v.push_back(arr[j]);
        j++;        
    }
    
    int k = l;
    for(auto i:v){
        arr[k] = i;
        k++;
    }

}



void mergeSort(int arr[],int l,int h){

    if(l>=h){
        return ;
    }

    int m = (l+h)/2;
    
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,h);
    merge(arr,l,m,h);
}

int main(){

    // 38 27 43 3 9 82 10

    int arr[100],n;
    cout<<"enter array size : ";
    cin>>n;

    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"array before sorted : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    mergeSort(arr,0,n-1);

    cout<<"array after sorted : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}