#include <bits/stdc++.h>
using namespace std;
int repeatingEle(vector<int> &v)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        if (mp.find(v[i]) != mp.end())
        {
            return v[i];
            break;
        }
        else
        {
            mp[v[i]]++;
        }
    }
    return INT_MIN;
}

int main()
{
    vector<int> v = {0, 3, 1, 5, 3, 3};
    cout << repeatingEle(v);
    return 0;
}