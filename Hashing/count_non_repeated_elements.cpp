#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void countNonRep(vector<int> v)
    {
        int count = 0;
        unordered_map<int, int> m; 
        for(auto x:v){
            m[x]++;
        }
        for (auto e : m)
        {
            if (e.second == 1)
            {
                count++;
            }
        }
    cout << count;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    Solution obj;
    obj.countNonRep(v);
    return 0;
}