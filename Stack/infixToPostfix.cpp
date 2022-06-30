#include <bits/stdc++.h>
using namespace std;
void infiToPost(string str)
{
    stack<int> s;
    for (int i = 0; i < str.length(); i++)
    {
        int num = int(str[i]);
        if (num < 91 && num > 64 || num < 123 && num > 96)
        {
            cout << char(str[i]);
        }
        else if (str[i] == '(')
        {
            s.push(str[i]);
        }
        else if (str[i] == ')')
        {
            int nSize = s.size();
            for (int i = 0; i < s.size(); i++)
            {
                if (s.top() == '(')
                    {break;}
                char ans = s.top();
                s.pop();
                cout << ans;
            }
            s.pop();
        }
        else
        {
            if (str[i] == '^')
            {
                s.push(str[i]);
            }
            else if (str[i] == '*' || str[i] == '/')
            {
                s.push(str[i]);
            }
            else if (str[i] == '+' || str[i] == '-')
            {
                s.push(str[i]);
            }
            else cout << "Wrong input";
        }
    }
    int ns = s.size();
    for (int i = 0; i <ns ; i++)
    {
        char ans = s.top();
        s.pop();
        cout << ans;
    }
    
}
int main()
{
    string str = "(a+b)*c";
    infiToPost(str);
    return 0;
}