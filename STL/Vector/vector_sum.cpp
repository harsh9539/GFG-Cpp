#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(auto x:v) sum+=x;
    cout << sum;


    return 0;
}