#include <bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void infiToPost(string str)
{
    stack<char> s;
    string result;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A')
        {
            result += c;
        }
        else if (c == '(')
        {
            s.push('(');
        }   
        else if (c == ')')
        {
            while (s.top() != '(')
            {
                result += s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.empty() && prec(str[i]) <= prec(s.top()))
            {
                if (c == '^' && s.top() != '^')
                    break;
                else
                {
                    result += s.top();
                    s.pop();
                }
            }
            s.push(c);
        }
    }
    // Pop all the remaining elements from the stack
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    cout << result << endl;
}
int main()
{
    string str = "a+b*(c^d-e)^(f+g*h)-i";
    infiToPost(str);
    return 0;
}