#include<iostream>
using namespace std;

// creating object like macro
#define PI 3.14

//creating function like macro example 1
#define min(a,b)  ((a<b)?a:b)

//creating function like macro example 2
#define print(a)  cout<<"value is : "<<a<<endl;

//creating chain like macro
#define insta 2000
#define follower insta



//creatin multiline macro
#define PRINT_star(n) \
    for(int i = 0; i  <n; i++ ){ \
        cout << "*"; \
    }                \
    cout << endl ;



int main(){

    int r = 5;
    cout<<"area of circle : "<<(PI * r * r)<<endl;

    int a = 2;
    int b = 4;
    cout<<"min of "<<a<<" and "<<b<<" is "<<min(a,b)<<endl;


    int x = 10;
    print(x);


    cout<<"my follower is : "<<follower<<endl;



    PRINT_star(5);

    return 0;
}