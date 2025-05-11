#include<iostream>
#include<vector>

using namespace std;

// we need to find element that occurs more than n/2 times if not exist reurn -1;



// approach --->  use moore voting algorithm

//step 1 --> take first element as majority element (me) and set vote to 1
//step 2 --> now check all remaining element ua array

// case 1  ---> if current element and majority element same vote increase by one & go further;
// case 2 ---> if current element and majority element are different 

//    then vote decrease by one and check  
// if vote becomes 0 then update majority element with current element and give vote 1

// if element exist which occurs more than n/2 times 
//then it vote not become zero (remaining element less than n/2)

// this element as me  ----> now count occurence of this element to check it is greater than n/2 or not

// if element not exist then  me --> count <= n/2  return -1;(not exist)




// function for finding element which occurs more than n/2 times
int findElement(vector<int> &arr){

    int me = arr[0]; //first element as majority element
    int vote = 1;

    int n = arr.size();

    for(int i = 1; i < n; i++){

        if(arr[i] == me){
            vote++;
        }
        else{
            vote--;

            if(vote == 0){// vote becomes zero --> update me
                me = arr[i];
                vote = 1;
            }
        }
    }

    int count = 0;// counting me occurence

    for(int i=0;i<n;i++){

        if(me == arr[i]){
            count++;
        }
    }

    if(count > n/2){
        return me;
    }
    else{
        return -1;
    }
}






int main(){

    int n;
    vector<int> arr;

    cout<<"enter array size : ";
    cin>>n;

    cout<<"enter array elements : ";
    for(int i = 0; i < n; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    cout<<"array is : ";
    for(auto element:arr){
        cout<<element<<" ";
    }cout<<endl;

    int Element = findElement(arr);

    if(Element == -1){
        cout<<"element is not exist"<<endl;
    }
    else{
        cout<<"element which occurs more than n/2 times is : "<<Element<<endl;
    }

    return 0;
}