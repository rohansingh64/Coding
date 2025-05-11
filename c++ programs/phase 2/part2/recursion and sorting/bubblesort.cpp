#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){

    if(n == 0 || n == 1){
        return ;
    }
    bool isSwap = false;
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            isSwap = true;
        }
    }
    if(!isSwap){
        return ;
    }
    return bubbleSort(arr,n-1);
}

int main(){

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

    bubbleSort(arr,n);

    cout<<"array after sorted : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}