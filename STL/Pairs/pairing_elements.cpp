#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pair<int, int> pa[n];
    int m = n;
    if (n % 2 != 0)
    {
        n = (n / 2) + 1;
    }
    else
        n = n / 2;
    for (int j = 0; j < n; j++)
    {
        pa[j] = {arr[j], arr[m - 1]};
        m--;
    }
    for (int k = 0; k < n; k++)
    {
        cout << "(" << pa[k].first << "," << pa[k].second << ")" << endl;
    }

    return 0;
}