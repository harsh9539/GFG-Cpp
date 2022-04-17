#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, mean, ans = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    mean = sum / n;
    cout << mean << " ";
    sort(arr, arr + n);
    if (n % 2 != 0)
    {
        n = n / 2;
        ans = arr[n];
    }
    else
    {
        n = n/2;
        ans = (arr[n]+arr[n-1])/2;
    }
    cout << ans;

    return 0;
}