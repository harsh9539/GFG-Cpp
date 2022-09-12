#include<bits/stdc++.h>
using namespace std;
queue<int> reverse(queue<int> q){
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
int main(){
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
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }    
    return 0;
}