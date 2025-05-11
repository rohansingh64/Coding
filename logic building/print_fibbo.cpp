#include<iostream>
using namespace std;
 
void print_fibbo(int n){
    int n1 = 0;
    int n2 = 1;
    int n3 = n1 + n2;
    cout<<"0 1 ";
    for(int i=3;i<=n;i++){
        n1 = n2;
        n2 = n3;
        cout<<n3<<" ";
        n3 = n1+n2;
    }
}

int print_fibbo_recursion(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return (print_fibbo_recursion(n-1)+print_fibbo_recursion(n-2));
    }
}

int main(){
    int n;
    cout<<"enter no of fibbonaci nos:";
    cin>>n;
    cout<<"fibbo nos of "<<n<<" terms are : ";
    print_fibbo(n);
    cout<<"\n";
    cout<<"\n";
    cout<<"fibbo nos of "<<n<<" terms using recursion are : ";
    for(int i=0;i<n;i++){
        cout<<print_fibbo_recursion(i)<<" ";
    }
    return 0;
}