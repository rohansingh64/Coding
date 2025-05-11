#include<iostream>
using namespace std;

//       #####  call by value example #####

void function_1(int a){
    a = a + 10;
    cout<<"address of a of function = "<<&a<<endl;
}

int main(){

    int a = 10;

    cout<<"value of a before 'call by value' = "<<a<<endl;
    cout<<endl;
    cout<<"address of a of main = "<<&a<<endl;
    cout<<endl;
    function_1(a);// call by value
    cout<<endl;
    cout<<"value of a after 'call by value' = "<<a<<endl;
    // does not change because both a is different and at different memory location


    return 0;

}