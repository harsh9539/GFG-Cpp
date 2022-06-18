#include <bits/stdc++.h>
using namespace std;
void reverse(string S, int len)
{
    // code here

    stack<char> st;
    for (int i = 0; i < len; i++)
    {
        st.push(S[i]);
    }

    for (int j = 0; j < len; j++)
    {
        S[j] = st.top();
        st.pop();
    }

    for (int i = 0; i < len; i++)
    {
        cout << S[i];
    }
    
}
int main()
{
    string s = "HarshGoyal";
    reverse(s,s.length());


    return 0;
}