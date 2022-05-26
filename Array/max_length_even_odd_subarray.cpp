#include <bits/stdc++.h>
using namespace std;
int maxEvenOdd(int arr[], int n)
{
    int res = 0;
    int count = 1;
    for (int i = 0; i < n-1; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i + 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0))
        {
            count++;
            res = max(res, count);
        }
        else
            count = 1;
    }
    return res;
}
int main()
{
    int arr[5] = {10, 12, 14, 7, 8};
    cout << maxEvenOdd(arr, 5);

    return 0;
}