#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // for iterating from 0 to n
    for(auto x:v) cout << x  << " "<< endl;

    // for reverse priting
    for(auto it = v.rbegin(); it != v.rend(); it++){
        cout << (*it) << " ";
    }
    return 0;
}