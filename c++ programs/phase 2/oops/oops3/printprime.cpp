#include<iostream>
using namespace std;
class integer
{
    private:
        int n1,n2;
    public:
        void get()
        {
            cout<<"Enter an integer range : ";
            cin>>n1>>n2;
        }
        void print();
};
void integer :: print()
{   cout<<"prime number from "<<n1<<" to "<<n2<<endl;
    for(int n=n1;n<=n2;n++)
    { int count = 0;
      for(int i=2;i<n;i++)
      {
        if(n%i==0)
        {
            count++;
        }
      }
      if(count==0 && n!=1)
        {
          cout<<n<<"  ";
        }
    }
}
int main()
{
    integer aa;
    aa.get();
    aa.print();
    return 0;
}