#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// problem statement --> write a function which take input array and array size

// and return sum of all prime no present in array except smallest prime no

// if there is no prime no in array it returns sum of all array element except smallest no



bool isprime(int num){
    
    if(num <= 1){
        return false;
    }
    for(int i=2;i<num;i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}


int getPrimeSum(int arr[],int size){

    vector<int> primes;

    for(int i=0;i<size;i++){
        if(isprime(arr[i])){
            primes.push_back(arr[i]);
        }
    }
    

    if(primes.size() == 0){//no prime number then array sum(except smallest)

        // finding smallest in arr
        int small = INT_MAX;
        for(int i=0;i<size;i++){
            if(arr[i]<small){
                small = arr[i];
            }
        }
        //finding sum of all except smallest
        int sum = 0;
        for(int i=0;i<size;i++){
            if(arr[i]!=small){
                sum += arr[i];
            }
        }
        return sum;
    }

    else{   // prime number then primes sum(except smallest)

        // finding smallest in arr
        int small = INT_MAX;
        for(int element:primes){
            if(element<small){
                small = element;
            }
        }
        //finding sum of all except smallest
        int sum = 0;
        for(int element:primes){
            if(element!=small){
                sum += element;
            }
        }
        return sum;
    }

}





int main(){

    int arr[100];
    int n;

    cout<<"input array size : ";
    cin>>n;
    cout<<"input array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"array elements are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    int result = getPrimeSum(arr,n);

    cout<<" answer is : "<<result<<endl;

    return 0;
}
