#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        // cout << "one thing " << " ";
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
            // cout << st.top() << " ";
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            else if ((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') ||  (st.top() == '[' && s[i] == ']') == true)
            {
                // cout << "inside this" << " " << st.top() << " ";
                st.pop();
                cout<< "checking size of stack " << st.size() << " ";
            }
            
            else {
                cout << "here";return false;}
        }
    }
    if(st.empty() ==  true){cout << "her to"; return true;}
    // cout << "here erljejr";
    return false;
}

int main()
{
    string s = "()";
    int ans = isValid(s);
    cout << ans;
    return 0;
}