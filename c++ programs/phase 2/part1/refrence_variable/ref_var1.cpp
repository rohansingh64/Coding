#include<iostream>
using namespace std;


int main(){
    
    int i = 5;
    // creating a reference variable
    int &j = i;

    cout<<"before i = "<<i<<endl;
    cout<<"before j = "<<j<<endl;

    i++;

    cout<<"after i++ i = "<<i<<endl;
    cout<<"after i++ j = "<<j<<endl;

    j++;

    cout<<"after j++ i = "<<i<<endl;
    cout<<"after j++ j = "<<j<<endl;

    
    return 0;
}