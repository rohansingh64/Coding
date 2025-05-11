#include<iostream>
using namespace std;

double cal(double a,double b,char c){
    double d = 0.0;
    switch(c){
        case '+' :
            d = a+b;
            break;
        case '-' :
            d = a-b;
            break;
        case '*' :
            d = a*b;
            break;
        case '/' :
            if(b == 0){
                cout<<"Division by zero is not allowed"<<endl;
            }
            else{
                d = a/b;
            }
            break;
        default:
            cout<<"Invalid operator"<<endl;
            break;
    }
    return d;
}

int main(){

    double a,b;

    char c;

    cout<<"enter the first no. "<<endl;
    cin>>a;

    cout<<"enter the sign [+ - / *]"<<endl;
    cin>>c;

    cout<<"enter the second no. "<<endl;
    cin>>b;

    double d;

    d = cal(a,b,c);

    cout<<a<<" "<<c<<" "<<b<<" = "<<d;


    return 0;
}