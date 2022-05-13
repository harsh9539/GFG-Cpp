#include<bits/stdc++.h>
using namespace std;
int intersectionArrays(vector<int> v,vector<int> v2){
    unordered_set<int> un;
    for (int i = 0; i < v.size(); i++)  un.insert(v[i]);
    int res = 0;
    for (int j = 0; j < v2.size(); j++)
    {
        if(un.find(v2[j]) != un.end()){
            res++;
            un.erase(v2[j]);
        }
    }
    return res;
    
}
int main(){
    int n;
    cin >> n;
    vector<int> v,v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    int ans = intersectionArrays(v,v2);
    cout << ans;
    return 0;
}