#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;

    cout << "enter a valid IP address : " << endl;

    cin >> str;

    cout << "IP address is : " << str << endl;

    string s;

    for (char ch : str)
    {
        if (ch != '.')
        {
            s.push_back(ch);
        }
        else
        {
            s.push_back('[');
            s.push_back(ch);
            s.push_back(']');
        }
    }

    cout << "IP address in defanged version is : " << s << endl;

    return 0;
}