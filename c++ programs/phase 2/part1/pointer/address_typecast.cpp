#include<iostream>
using namespace std;

int main(){

    int n = 65;
    char ch = n;  // in this case we directly type cast --> implicit type casting
    cout<<"ch ---> "<<ch<<endl;

    // for pointers type casting --> address type cast

    int i = 65;
    int *p = &i;
    // char *c = p; --> directly gives error we need
    // type cast operator --> explicit type casting

    char *c = (char*)p;// by this i is not become char but by access *c gives char value

    cout<<"*c = "<<*c<<endl;
    cout<<"*p = "<<*p<<endl;

    return 0;
}