#include<iostream>
using namespace std;

int main(){

    int arr[10];

    char ch[6] = "abcde";

    cout << "arr --> " << arr << endl; //print address for int array
    cout << "ch --> " << ch << endl; // print elements for char array

    char *c = &ch[0];
    int *p = &arr[0];

    cout << "p --> " << p << endl;//print address for int array
    cout << "c  --> " << c << endl;// print elements for char array


    char temp = 'e';
    char *ptr = &temp;
    
    cout << "ptr --> " << ptr << endl; // prints e and more till it reaches a null value



    return 0;
}