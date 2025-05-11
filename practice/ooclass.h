#include<iostream>
using namespace std;

class exa{

    private:

    int val;

    public:

    void setVal(int val){
        this->val = val;
    }


    void add(int a,int b){
        cout<<"sum is : "<<a+b<<endl;
    }

    int operator+(exa &temp){

        int m = val;

        int n = temp.val;

        return m*n;

    }
};