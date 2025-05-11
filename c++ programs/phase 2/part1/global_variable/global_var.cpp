#include<iostream>
using namespace std;

// we can use global var for sharing variable among multiple function

int i = 15;//global variable
int x = 5;

void a(){
    cout<<"i value in a : "<<i<<endl;
    x = x+1;
    cout<<"x value in a : "<<x<<endl;
    //change x in a function but it change globally everywhere
    // so use of global variable is not good practise
    // for sharing a variable in multiple function
    // use reference variable concept
}
void b(){
    cout<<"i value in b : "<<i<<endl;
    cout<<"x value in b : "<<x<<endl;
}
int main(){

    cout<<"i value in main : "<<i<<endl;
    cout<<"x value in main : "<<x<<endl;

    a();

    b();

    return 0;
}