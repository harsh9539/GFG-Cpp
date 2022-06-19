#include <bits/stdc++.h>
using namespace std;
#define for(i, n)  for(int i = 0; i < n; i++)
void removeDup(string str)
{
    stack<char> s;
    for (i, str.length())
    {
        if (s.empty())
        {
            s.push(str[i]);
        }
        else if (s.top() == str[i])
        {
            s.pop();
            s.push(str[i]);
        }
        else
        {
            cout << s.top();
            s.push(str[i]);
        }
    }
    cout << s.top();
}

int main()
{
    string str = "aaaaabccbcccccd";
    removeDup(str);
    return 0;
}