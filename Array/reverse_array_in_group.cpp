#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, j;
    cin >> n >> k;
    int arr[n];
    int arr2[k];
    int arr3[n - k];
    // taking input of array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (j = 0; j < k; j++)
    {
        arr2[j] = arr[j];
    }
    cout << " value of arr2[0]" << arr2[0] << endl;

    for (int m = j + 1; m < n; m++)
    {
        arr3[m] = arr[m];
    }
    cout << " value of arr2[0]" << arr2[0] << endl;
    for (int i = k - 1; i >= 0; i--)
    {
        cout << arr2[i] << " ";
    }
    for (int g = n - 1; g >= k; g--)
    {
        cout << arr3[g] << " ";
    }

    return 0;
}