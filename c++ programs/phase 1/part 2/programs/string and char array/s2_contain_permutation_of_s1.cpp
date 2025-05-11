// problem statement --->  if s2 contain any permutation 
//                        of s1 then return true else return false


#include<iostream>
#include<string>

using namespace std;


    bool isequal(int a[26] , int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};

        for(int i=0;i<s1.length();i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int count2[26] = {0};

        int i=0;
        int windowSize = s1.length();
        while(i<windowSize && i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        if(isequal(count1,count2)){
            return true;
        }
        while(i<s2.length()){
            int index1 = i - windowSize;
            int index2 = s2[index1] - 'a';
            count2[index2]--;
            int index3 = s2[i] - 'a';
            count2[index3]++;
            if(isequal(count1,count2)){
            return true;
            }
            i++;
        }
        return false;
    }

int main(){
    string s1 = "abc";
    string s2 = "eidbacooo";
    bool ans = checkInclusion(s1,s2);
    if(ans){
        cout<<"s2 contain permutation of s1 ";
    }
    else{
        cout<<"s2 does not contain permutation of s1 ";
    }
    return 0;
}