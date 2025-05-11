#include<iostream>
#include "ooclass.h"
using namespace std;

int main(){

    exa aa;

    aa.setVal(5);

    exa bb;

    bb.setVal(10);

    int s = aa+bb;

    aa.add(10,20);

    cout<<"multiplication using operator overloading : "<<s<<endl;

    return 0;
}