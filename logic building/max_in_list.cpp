#include<iostream>
using namespace std;

int maximum(int a[],int n){
    int maximum = a[0];
    for(int i=1;i<n;i++){
        /*if(a[i]>maximum){
            maximum = a[i];
        }*/
        maximum = max(a[i],maximum);
    }
    return maximum;
}

int main(){
    int a[5] = { 1,3,2,6,4};
    int n = sizeof(a)/sizeof(int);
    cout<<"max in array is : "<<maximum(a,n);
    return 0;
}