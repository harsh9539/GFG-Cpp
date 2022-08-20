#include<bits/stdc++.h>
using namespace std;

void reversStack(stack<int> s){
    stack<int> st;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        int res = s.top();
        s.pop();
        st.push(res);
    }
    int sz = st.size();
    for (int i = 0; i < sz; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }    
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reversStack(s);

    return 0;
}