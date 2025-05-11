#include<iostream>
#include<string>

using namespace std;


string replaceSpaces(string &str){

	int size = str.length();
	string temp;
	int i=0;
	while(i<size){
		if(str[i]!=' '){
			temp.push_back(str[i]);
			i++;
		}
		if(str[i]==' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
			i++;
		}
	}
	return temp;
}

int main(){
    string str;
    cout<<"enter string -> ";
    getline(cin,str);  //  for taking spaces as input 
    cout<<"str before replacement of space -> "<<str<<endl;
    cout<<"str after replacement of space -> "<<replaceSpaces(str)<<endl;

}