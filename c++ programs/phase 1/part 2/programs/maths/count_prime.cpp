#include<iostream>
#include<vector>
using namespace std;

/*  this method is O(n^2)  --> give TLE  (time limit exceed)

bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int count_prime(int num){
    int count = 0;
    for(int n=2;n<num;n++){
        if(isprime(n)){
            count++;
        }
    }
    return count;
}
*/

/*  we use  SIEVE OF ERATOSTHENES  */

int count_prime(int n){
    int count = 0;

    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;

    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=false;
            }
        }
    }
    return count;
}

int main(){
    int num;
    cout<<"enter num value --> ";
    cin>>num;

    int ans = count_prime(num);

    cout<<"count of prime number less than "<<num<<" is "<<ans;

    return 0;
    
}