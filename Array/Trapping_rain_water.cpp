#include <bits/stdc++.h>
using namespace std;
int trappingWater(int arr[], int n)
{
    int lMax[n], rMax[n], res = 0;
    lMax[0] = arr[0];
    for (int i = 1; i < n; i++)
        lMax[i] = max(lMax[i - 1], arr[i]);
    rMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        rMax[i] = max(rMax[i + 1], arr[i]);
    for (int i = 1; i < n - 1; i++)
    {
        res = res + (min(lMax[i], rMax[i]) - arr[i]);
    }
    return res;
}
int main()
{
    int arr[13] = {0,1,0,1,2,1,0,1,3,2,1,2,1};
    int ans = trappingWater(arr, 13);
    cout << ans;
    return 0;
}