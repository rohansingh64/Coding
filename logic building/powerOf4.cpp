#include<iostream>
using namespace std;



//  Approach --> power of 4 divisible by 4 till 1  ( 1 is power of 4 also) 
//   256  div --> 64 --> div --> 16 --> div ----> 4 ---> div ---> 1  reach 1 return true
//  400 div ---> 100  ---> div ---> 25 not div return false


bool IsPowerOf4(int n){

    if(n <= 0){
        return false;
    }

    while(n != 1){

        if(n % 4 != 0){// if not div return false
            return false;
        }
        // if div check for n/4 to till 1
        n = n/4;
    }
    return true;
}



int main(){

    int n;

    cout<<"enter n value :";
    cin>>n;

    bool ans = IsPowerOf4(n);

    if(ans){
        cout<<n<<" is power of 4"<<endl;
    }
    else{
        cout<<n<<" is not power of 4"<<endl;
    }


    return 0;
}