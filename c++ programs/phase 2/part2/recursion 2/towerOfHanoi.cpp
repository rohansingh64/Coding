#include<iostream>
using namespace std;


long long TOH(int n,int src,int dest,int aux){
    
    // initial count = 0;

    long long count = 0;

    //base case only one disk
    if(n == 1){
        cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
        // one last or buttom disk move count = 1; return 1;
        return 1;
    }

    // total count -->  count to move n-1 disk in aux + nth disk in dest + n-1 disk of aux to dest

    // move n-1 upper disk of src into aux using dest( dest empty)
    count = count + TOH(n-1,src,aux,dest);

    //moving nth src disk into dest
    cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
    count++; // one disk move 1 step increse

    // move n-1 disk of aux into dest using src (src empty hai use as aux)
    count = count + TOH(n-1,aux,dest,src);

    return count;
} 




int main(){

    int n;

    cout<<"input n value : ";
    cin>>n;

    int src = 1;//source
    int aux = 2;//auxiliary
    int dest = 3;//destination

    long long countSteps = TOH(n,src,dest,aux);// formula is (2^n) - 1;can be large value

    cout<<endl<<"no of steps : "<<countSteps<<endl;

    return 0;
}