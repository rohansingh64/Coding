#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPair(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return true;
    }
    else if (a == '[' && b == ']')
    {
        return true;
    }
    else if (a == '{' && b == '}')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    string str;

    cout << "enter string : " << endl;
    cin >> str;

    cout << "string is : " << str << endl;

    stack<char> s;

    for (char ch : str)
    {
        if (s.empty())
        {
            s.push(ch);
        }
        else if (isPair(s.top(), ch))
        {
            s.pop();
        }
        else
        {
            s.push(ch);
        }
    }

    if (s.empty())
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}