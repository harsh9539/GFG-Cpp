#include <bits/stdc++.h>
using namespace std;
queue<int> reverse(queue<int> q)
{
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    return q;
}
void print(queue<int> q)
{
    int sz = q.size();
    for (int i = 0; i < sz; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    q = reverse(q);
    print(q);
    }
    return 0;
}