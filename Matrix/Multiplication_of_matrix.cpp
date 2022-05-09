// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // input for First Array
//     int n, m;
//     cin >> n >> m;
//     int a[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     // input for second Array
//     int n2, m2;
//     cin >> n2 >> m2;
//     int b[n2][m2];
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < m2; j++)
//         {
//             cin >> b[i][j];
//         }
//     }
//     // Multiplication of Matrix
//     int c[n][m2];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m2; j++)
//         {
//             c[i][j] = 0;
//             for (int k = 0; k < m; k++)
//             {
//                 c[i][j] = a[i][k] * b[k][j];
//             }
//         }
//     }
//     cout << endl << "Output Matrix: " << endl;
//     for (int i = 0; i < n; ++i)
//         for (int j = 0; j < m2; ++j)
//         {
//             cout << " " << c[i][j];
//             if (j == m2 - 1)
//                 cout << endl;
//         }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout <<"Cant be Multiplied";
        return 0;
    }
    // Storing elements of first matrix.
    cout << endl
         << "Enter elements of matrix 1:" << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    // Storing elements of second matrix.
    cout << endl
         << "Enter elements of matrix 2:" << endl;
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    // Multiplying matrix a and b and storing in array mult.
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            mult[i][j] = 0;
            for (k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    // Displaying the multiplication of two matrix.
    cout << endl
        << "Output Matrix: " << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << " " << mult[i][j];
            if (j == c2 - 1)
                cout << endl;
        }
    return 0;
}