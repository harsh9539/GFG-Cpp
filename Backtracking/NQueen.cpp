#include <bits/stdc++.h>
using namespace std;

bool isSafe(int board[][4], int x, int y, int n)
{
    for (int i = 0; i < x; i++)
    {
        if (board[i][y] == 1)
        {
            return false;
        }
    }
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool solveNQueen(int board[][4], int x, int n)
{
    if (x == n)
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(board, x, col, n))
        {
            board[x][col] = 1;
            if (solveNQueen(board, x + 1, n))
            {
                return true;
            }
            board[x][col] = 0;
        }
    }
    return false;
}

int main()
{
    int n = 4;
    int board[4][4] = {0};
    if (solveNQueen(board, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "-1";
    }
    cout << endl;
    return 0;
}