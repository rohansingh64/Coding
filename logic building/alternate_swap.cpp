#include<iostream>
using namespace std;

void alternate_reverse(int a[],int n){
    int i = 0;
    while(i<=n-2){
        swap(a[i],a[i+1]);
        i = i+2;
    }
}

int main(){
    int a[100],n;
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
    alternate_reverse(a,n);
    cout<<"array elements after alternate reverse are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}