/*

question --------->

you have  firstName(string)  ,   lastName(string)  ,  pincode (int)  , n (int)  || n is always <= length of pin

you need to create a userId   as 

userId  ==>  smaller last character + longer + nth digit of pincode from left +  nth digit of pincode from right
              then toggle them (toggle means uppercase convert to lowercase and lowercase into uppercase)

    where smaller & longer as  -->  
    smaller is less length wala between firstName & lastName
    longer is more length wala between firstName & lastName
    if both length same then
    smaller is less lexicographical wala between firstName & lastName
    longer is  more lexicographical wala between firstName & lastName

    */

#include<iostream>
using namespace std;


// function to toggle string

string toggle(string s){

    for(int i = 0;i < s.length(); i++){
        if(s[i] <= 'z' && s[i] >= 'a'){// lower case ---> change into upper case
            s[i] = s[i] + 'A' - 'a';
        }
        else if(s[i] <= 'Z' && s[i] >= 'A'){// upper case --> change into lower case
            s[i] = s[i] + 'a' - 'A';
        }
    }

    return s;

}






// function for get user Id 

string getUserId(string firstName,string lastName,int pincode,int n){


    //1st step find smaller and longer

    string smaller;
    string longer;

    if(firstName.length() < lastName.length()){
        smaller = firstName;
        longer = lastName;
    }
    else if(firstName.length() > lastName.length()){
        smaller = lastName;
        longer = firstName;
    }
    else if(firstName.length() == lastName.length()){
        
        int res = firstName.compare(lastName);

        // if res == 0  means firstName = lastName both are same 
        //  give any one to any because both have same value

        if(res <= 0){// lexicographically firstName is smaller
            smaller = firstName;
            longer = lastName;
        }
        else if(res > 0){// lexicographically firstName is bigger
            smaller = lastName;
            longer = firstName;
        }

    }

    string userId1;

    int len1 = smaller.length();

    userId1 = userId1 + smaller[len1 - 1] + longer;// concetenate using + 

    // 2nd step find pincode nth digit from left and right

    string pin = to_string(pincode);

    //nth digit from left

    char nthleft = pin[n-1];

    //nth digit from right

    int len2 = pin.length();

    char nthright = pin[len2 - n];

    userId1 = userId1 + nthleft + nthright;// concetenate using + 

    string userId = toggle(userId1);
    
    return userId;

}









int main(){


    string firstName , lastName;
    int pincode , n;

    cout<<"enter first name : ";
    cin>>firstName;

    cout<<"enter last name : ";
    cin>>lastName;

    cout<<"enter pincode : ";
    cin>>pincode;

    cout<<"enter n (<= length of pincode): ";
    cin>>n;

    string ans = getUserId(firstName,lastName,pincode,n);

    cout<<"user Id  will be : "<<ans<<endl;


    return 0;
}