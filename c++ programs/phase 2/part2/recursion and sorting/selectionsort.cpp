#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){

    if(n == 0 || n == 1){
        return ;
    }
    int min = 0;
    for(int j=1;j<n;j++){
        if(arr[j]<arr[min]){
            min = j;
        }
    }
    swap(arr[0],arr[min]);

    return selectionSort(arr+1,n-1);
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

    selectionSort(arr,n);

    cout<<"array after sorted : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}