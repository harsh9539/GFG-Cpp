#include <bits/stdc++.h>
using namespace std;
void printFun(vector<vector<int>> &v)
{
    
    // for finding the size of row = mt.size();
    // for finding the size of column = mt[0].size();
    int n = v.size();
    int m = v[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> mt;
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int k;
            cin >> k;
            temp.push_back(k);
        }
        mt.push_back(temp);
    }
    printFun(mt);
    return 0;
}