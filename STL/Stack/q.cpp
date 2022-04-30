#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stack<int> s;
    cout << -1 << " ";
    s.push(arr[0]);
    for (int i = 0; i < n; i++)
    {
        while(s.empty() == false && s.top() <= arr[i]) s.top();
        int pg = (s.empty()? -1 : s.top());
        cout << pg << " ";
        s.push(arr[i]);
    }
    
    return 0;
}