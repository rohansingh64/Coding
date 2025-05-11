#include<iostream>
using namespace std;
class integer
{
    private:
        int n;
    public:
        void get()
        {
            cout<<"Enter an integer : ";
            cin>>n;
        }
        void check();
};
void integer :: check()
{   
    int count = 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0 && n!=1)
    {
        cout<<n<<" is a prime number.";
    }
    else
    {
        cout<<n<<" is not a prime number.";
    }

}
int main()
{
    integer aa;
    aa.get();
    aa.check();
    return 0;
}