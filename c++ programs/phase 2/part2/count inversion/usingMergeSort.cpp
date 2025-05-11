#include<iostream>
#include<vector>
using namespace std;

int merge(int arr[],int l,int m,int h){

    int count = 0;

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
            count = count + (m+1-i);//size - i
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

    return count;

}



int mergeSort(int arr[],int l,int h){

    int count = 0;
    if(l>=h){
        return 0;
    }

    int m = (l+h)/2;
    
    count = count + mergeSort(arr,l,m);
    count = count + mergeSort(arr,m+1,h);
    count = count + merge(arr,l,m,h);

    //total inversion count = left array me + right array me + dono ko merge karne me

    return count;

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

    int count_Inversion = mergeSort(arr,0,n-1);

    cout<<"array after sorted : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"inversion count is : "<<count_Inversion<<endl;

    return 0;
}