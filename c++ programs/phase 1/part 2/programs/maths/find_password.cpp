

// problem statement -->
// we have 5 numbers (example --> 12,1313,122,678,898)
// password is form by (sum of stable nos) - (sum of unstable nos)
//stable no is a no in which count(frequency) of all digits are equal 
//otherwise that no is unstable

#include<iostream>
using namespace std;

bool isStable(int n){
    int count[10] = {0};
    int frequency = -1;
    while(n){
        int rem = n % 10;
        count[rem]++;
        n = n/10;
    }
    for(int i=0;i<10;i++){
        if(count[i] != 0){
            frequency = count[i];
            break; 
        }
    }
    for(int i=0;i<10;i++){
        if(count[i] != 0 && frequency != count[i]){
             return false;
        }
    }
    return true;
}

int generatePassword(int input1, int input2, int input3, int input4, int input5){

    int sumStable = 0;
    int sumUnstable = 0;
    int arr[5] = {input1,input2,input3,input4,input5};
    for(int i=0;i<5;i++){
        if(isStable(arr[i])){
            sumStable += arr[i];
        }
        else{
            sumUnstable += arr[i];
        }
    }
    return (sumStable - sumUnstable);
}

int main(){
    int input1,input2,input3,input4,input5;

    cout<<"enter 5 inputs : "<<endl;
    cin>>input1>>input2>>input3>>input4>>input5;
    int password = generatePassword(input1,input2,input3,input4,input5);
    cout<<"password is : "<<password<<endl;
    return 0;
}