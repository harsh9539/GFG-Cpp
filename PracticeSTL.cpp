#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Pairs
    /*
    pair<int,int> pr[3];
    for(int i = 0;i<3;i++){
        pr[i] = {i,i+5};
    }
    for(int i = 0;i<3;i++){
        cout << pr[i].first << " " << pr[i].second<< endl;
    }
    */

    // vector of Pairs
    /*
    vector<pair<int,int>> vp;
    for (int i = 0; i < 3; i++)
    {
        vp.push_back({i,i+5});
    }
    for (int i = 0; i < 3; i++)
    {
        // vp.push_back({i,i+4});
        cout << vp[i].first << ' ' << vp[i].second << endl;
    }
    */

    // Vector of Vectors
    /*
    int val = 0;
    vector<vector<int>> vv;
    for (int i = 0; i < 3; i++)
    {
        vector<int> v;
        for (int j = 0; j < 3; j++)
        {
            v.push_back(val);
            val++;
        }
        vv.push_back(v);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }
    */

    // Vector of pairs of vectors
    // int val = 1;
    // vector<pair<int, vector<int>>> vpv;
    // for (int i = 0; i < 3; i++)
    // {
    //     vector<int> v;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         v.push_back(val);
    //         val++;
    //     }

    //     vpv.push_back({i, v});
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << vpv[i].first << "->";
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << vpv[i].second[j] << " ";
    //     }
    //     cout << endl;
    // }

    /*
        set<int> s;
        s.insert(10);
        s.insert(20);
        s.insert(30);
        set<int,greater<int>> s2;
        s2.insert(10);
        s2.insert(20);
        s2.insert(30);
        cout << s.count(10);
        for(auto x:s) cout << x << " ";
        for(auto x:s2) cout << x << " ";
    */
    
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(40);
    for(auto x:ms) cout << x << " ";
    auto it = ms.equal_range(10);
    cout << *it.first << " " << *it.second;
    return 0;
}