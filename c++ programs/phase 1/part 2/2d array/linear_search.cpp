#include<iostream>
using namespace std;

pair<int,int> linear_search(int arr[10][10],int x,int m,int n){
    pair<int,int> p;
    p.first = -1;
    p.second = -1;
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            if(arr[row][col]==x){
                p.first = row;
                p.second = col;
                return p;
            }
        }
    }
    return p;
}

int main(){
    int arr[10][10];
    int m,n;
    cout<<"enter no of rows (m) and columns (n)";
    cin>>m;
    cin>>n; 
     cout<<"enter elemnts of arr row wise  -> ";
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cin>>arr[row][col];
        }
    }
    //  print 2-D array 

    cout<<"arr -> "<<endl;
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    int x;
    cout<<"enter element to search -> ";
    cin>>x;
    pair<int,int>ans = linear_search(arr,x,m,n);
    if(ans.first==-1){
        cout<<"element not found";
    }
    else{
        cout<<"element found at row index = "<<ans.first<<" and column index = "<<ans.second;
    }
    return 0;
}