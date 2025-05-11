#include<iostream>
using namespace std;

int main(){
    int num = 5;

    int *ptr = &num;

    // ptr is a pointer which stores address of num 

    // *ptr refers to value present at address present in ptr



    //  * is dereference operator and & is address of operator



    cout<<"num using num= "<<num<<endl;

    cout<<"num using *ptr = "<<*ptr<<endl;

    cout<<"address of num using &num = "<<&num<<endl;// address of operator

    cout<<"address of num using ptr = "<<ptr<<endl;//ptr store address of num

    float n = 5.25;

    float *ptr2 = &n;
    cout<<"n using *ptr2 = "<<*ptr2<<endl;

    cout<<"size of num integer = "<<sizeof(num)<<endl;
    cout<<"size of pointer of num integer = "<<sizeof(ptr)<<endl;
    cout<<"size of pointer of n float = "<<sizeof(ptr2)<<endl;// both same because 
                                                        //both stores address
    
    cout<<endl;
    cout<<endl;
    // int *p --> wild pointer  ###
    // do not use wild pointer --> int *p;  --> random memory assign
    // and if that memory is only read but by this you can perform write also

    // use null pointer always in this case
    int number = 198;
    int *temp = 0; // or -->  int *temp = NULL;  null pointer
    temp = &number;

    cout<<"*temp = "<<*temp<<endl;

    cout<<endl;
    cout<<endl;



    // using void pointer

    int number2 = 22;
    void *temp2;
    temp2 = &number2;
    cout<<"temp2 or address of number2 = "<<temp2<<endl;
    //cout<<"*temp2 = "<<*temp2<<endl; // gives an error --> we cannot dereference temp
                                    // because we did not know type of data 



    cout<<endl;
    cout<<endl;

    // coping a pointer

    int m = 38;

    int *p = &m;

    int *q = p;

    cout<<"p and q --> "<<p<<" and "<<q<<endl;
    cout<<"*p and *q --> "<<*p<<" and "<<*q<<endl;

    cout<<endl;
    cout<<endl;

    // important concept

    int d = 10;
    int *t = &d;

    cout<<"before     d -> "<<d<<endl;

    *t = *t + 1;

    cout<<"after (*t = *t + 1)    d -> "<<d<<endl;

    cout<<"before t =  "<<t<<endl;

    t = t+1;  //  t is a address so it goes to next address 
              //  and it stores integer so next address is after 4 bytes

    cout<<"after (t=t+1)   t =  "<<t<<endl;

    return 0;

}