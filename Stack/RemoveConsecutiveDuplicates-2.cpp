#include <bits/stdc++.h>
using namespace std;
// #define for(i, n)  for(int i = 0; i < n; i++)
void removeDup(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (s.empty())
        {
            s.push(str[i]);
        }
        else if (s.top() == str[i])
        {
            s.pop();
        }
        else
        {
            s.push(str[i]);
        }
    }
    if (s.empty())
        cout << "Empty string";
    else
    {
        stack<int> st;
        for (int k = 0; k < s.size() + 1; k++)
        {
            char ans = s.top();
            st.push(ans);
            s.pop();
        }
        for (int k = 0; k < st.size() + 1; k++)
        {
            char ans = st.top();
            // st.push(ans);
            st.pop();
            cout << ans;
        }
    }
}

int main()
{
    string str = "aaaa";
    removeDup(str);
    return 0;
}