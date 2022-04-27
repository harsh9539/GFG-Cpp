#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    forward_list<int> fl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        fl.push_front(x);
    }
    for(auto x:fl) cout << x << " ";
    
    return 0;
}