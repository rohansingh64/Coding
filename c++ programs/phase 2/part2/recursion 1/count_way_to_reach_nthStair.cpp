#include<iostream>
using namespace std;

// you need to reach nth stair 
//find the no of toatal ways

//you can jump 1 or 2 stairs at a time

//  ### solution -->

// you reach at nth  by 1. reach at n-1 then jump 1
// 2. reach at n-2 then jump 2

// f(n) = f(n-1) + f(n-2)
// base case is for n = 1 and n = 2 because there is no n-1,n-2 stairs

int countDistinctWay(long long nStairs){

    if(nStairs == 1){
        return 1;
    }
    if(nStairs == 2){
        return 2;
    }
    return (countDistinctWay(nStairs - 1) + countDistinctWay(nStairs - 2));
}

int main(){
    long long nStairs;
    cout<<"enter stair value : ";
    cin>>nStairs;
    int way = countDistinctWay(nStairs);

    cout<<"total distinct way to reach at "<<nStairs<<" th stair is : "<<way<<endl;

    return 0;
}