#include <bits/stdc++.h>
using namespace std;

void printBoundary(vector<vector<int>> &v)
{
    int row = v.size(), col = v[0].size();
    if (row == 1)
    {
        for (int i = 0; i < col; i++)
        {
            cout << v[0][i] << " ";
        }
    }
    else if (col == 1)
    {
        for (int i = 0; i < row; i++)
        {
            cout << v[i][0] << " ";
        }
    }
    else
    {
        for (int i = 0; i < col; i++)
        {
            cout << v[0][i] << " ";
        }
        for (int j = 1; j < row; j++)
        {
            cout << v[j][col - 1] << ' ';
        }
        for (int k = col - 2; k >= 0; k--)
        {
            cout << v[row - 1][k] << ' ';
        }
        for (int m = row - 2; m >= 1; m--)
        {
            cout << v[m][0] << " ";
        }
    }
}

int main()
{
    vector<vector<int>> mt;
    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < col; j++)
        {
            int k;
            cin >> k;
            temp.push_back(k);
        }
        mt.push_back(temp);
    }
    printBoundary(mt);
    return 0;
}