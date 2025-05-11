#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//  a no is rep as sum of squares of 2 integer nos or not
// like    5 ---> (1)^2 + (2)^2  ||   c = a^2 + b^2 




bool Ispossible(int c){

    int a = 0;// min value
    int b = sqrt(c);// max value

    while(a<=b){
        int value = a*a + b*b;
        if(value == c){
            cout<<a<<"*"<<a<<" + "<<b<<"*"<<b<<endl;
            return true;
        }
        else if(value < c){
            a++;
        }
        else if(value > c){
            b--;
        }
    }
    return false;
}



int main(){

    int c;

    cout<<"enter a number : ";
    cin>>c;

    bool ans = Ispossible(c);

    if(ans){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}
