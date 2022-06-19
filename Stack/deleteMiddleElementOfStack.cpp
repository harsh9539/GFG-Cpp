#include <bits/stdc++.h>
using namespace std;
void deleteMid(stack<int> st, int x)
{
    stack<int> s2;
    for (int i = 0; i < x/2; i++)
    {
        int top = st.top();
        st.pop();
        s2.push(top);
    }
    if (x % 2 == 0)
    {
        x = (x / 2) - 1;
    }
    else
    {
        x = (x / 2);
    }
    st.pop();
    for (int i = 0; i < x; i++)
    {
        int top = st.top();
        st.pop();
        s2.push(top);
    }
    int newSize = s2.size();
    for (int i = 0; i < newSize; i++)
    {
        int ans = s2.top();
        s2.pop();
        st.push(ans);
    }
    for (int i = 0; i < newSize; i++)
    {
        int ans = st.top();
        st.pop();
        cout << ans << " ";
    }
}
int main()
{
    int size;
    cout << "Enter the size of stack: ";
    cin >> size;
    stack<int> MyStack;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        MyStack.push(x);
    }
    deleteMid(MyStack, MyStack.size());

    return 0;
}