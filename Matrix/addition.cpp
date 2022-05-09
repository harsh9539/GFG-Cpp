#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (auto j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int n2, m2;
    cin >> n2 >> m2;
    int arr2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (auto j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int c[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << c[i][j]<<" ";
        }
    }

    return 0;
}