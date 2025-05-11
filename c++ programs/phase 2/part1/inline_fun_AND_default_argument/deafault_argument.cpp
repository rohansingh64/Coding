#include<iostream>
using namespace std;

// remember in default argument 
// right most or right variable default ho tabhi uske left wala 
// default ho sakta hai


// sum of three numbers
int sum(int a,int b = 0,int c = 13){
    return (a+b+c);
}
int main(){
    int x = 5;
    int y = 2;
    int z = 8;
    int k = 100;

    int s1 = sum(10,y,z);
    // 10 copy to a ||  y(2) copy to b  ||  z(8) copy to c ||sum = 20
    cout<<"sum1 is : "<<s1<<endl;

    // agar argument pass hai to passed value lega nhi to default value lega

    int s2 = sum(x,z);
    //  x(5) copy to a  ||  z(8) copy to b  ||   c=13 (default) || sum = 26
    cout<<"sum2 is : "<<s2<<endl;

    int s3 = sum(k);
    //  k(100) copy to a  ||   b=0 (default)  ||   c=13 (default) || sum = 113
    cout<<"sum3 is : "<<s3<<endl;
}