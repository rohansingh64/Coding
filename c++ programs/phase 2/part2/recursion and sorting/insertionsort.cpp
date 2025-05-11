#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){

    if(n==0 || n==1){
        return ;
    }
    insertionSort(arr,n-1);
    int temp = arr[n-1];
    int j = n - 2;
    while(j>=0){
        if(temp<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        else{
            break;
        }
    }
    arr[j+1] = temp;

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

    insertionSort(arr,n);

    cout<<"array after sorted : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}