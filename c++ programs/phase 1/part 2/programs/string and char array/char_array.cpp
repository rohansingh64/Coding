#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

int main(){

    char name[20];

    cout<<"enter name :";
    cin>>name;
    cout<<"name -> "<<name<<endl;

    //name[2]='\0';
    //cout<<"name after insert null at index 2 -> "<<name<<endl;

    cout<<"length of given name -> ";

    int length = 0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }cout<<length<<endl;
    int n = length;

    reverse(name,n);

    cout<<" reverse name -> "<<name<<endl;    


    return 0;
}