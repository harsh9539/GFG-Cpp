#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum_upper = 0;
    int sum_lower = 0;
    // sum for upper part
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            sum_upper += arr[i][j];
        }
        
    }
    cout << sum_upper << " ";
    // sum for lower part
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum_lower += arr[j][i];
        }
    }
    cout << sum_lower;
    
    return 0;
}