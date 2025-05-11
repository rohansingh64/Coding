#include<iostream>
using namespace std;

//       #####  call by address passed to a pointer example #####

void function_1(int *p){
    *p = *p + 10;
    cout<<"address of a of function = "<<p<<endl;
}

int main(){

    int a = 10;

    cout<<"value of a before 'call by reference' = "<<a<<endl;
    cout<<endl;
    cout<<"address of a of main = "<<&a<<endl;
    cout<<endl;
    function_1(&a);//call by reference
    cout<<endl;
    cout<<"value of a after 'call by reference' = "<<a<<endl;

    return 0;

}