#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

    int i=n-1;
    int j=m-1;

    vector<int> c;
    int carry = 0;
    int sum = 0;
    while(i>=0 && j>=0){
        sum = a[i]+b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        c.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        c.push_back(sum);
        i--;
    }
    while(j>=0){
        sum = b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        c.push_back(sum);
        j--;
    }
    if(carry!=0 && i<0 && j<0 ){
        c.push_back(carry);
    }

    reverse(c.begin(),c.end());

    return c;
	
}


int main(){
    vector<int> a;
    int n;
    int input;
    cout<<"enter size of a -> ";
    cin>>n;
    cout<<"enter element of a -> ";
    for(int i=0;i<n;i++){
        cin>>input;
        a.push_back(input);
    }

    cout<<"array a -> ";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> b;
    int m;
    cout<<"enter size of b -> ";
    cin>>m;
    cout<<"enter element of b -> ";
    for(int i=0;i<m;i++){
        cin>>input;
        b.push_back(input);
    }

    cout<<"array b -> ";
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> sum = findArraySum(a,n,b,m);

    cout<<"sum vector c -> ";
    for(int i:sum){
        cout<<i<<" ";
    }


    return 0;
}