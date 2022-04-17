#include <bits/stdc++.h>
using namespace std;
// By using  class
class solution
{
public:
    void maxDiff(int arr[],int n);
    // void maxDiff(int arr[], int n)
    // {
    //     int res = arr[1] - arr[0], minVal = arr[0];
    //     for (int i = 0; i < n; i++)
    //     {
    //         res = max(res, arr[i] - minVal);
    //         minVal = min(minVal, arr[i]);
    //     }

    //     cout <<  res;
    // }
};
// function calling outside of class 
void solution::maxDiff(int arr[], int n)
    {
        int res = arr[1] - arr[0], minVal = arr[0];
        for (int i = 0; i < n; i++)
        {
            res = max(res, arr[i] - minVal);
            minVal = min(minVal, arr[i]);
        }

        cout <<  res;
    }


// Normal function
/*
int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0], minVal = arr[0];
    for (int i = 0; i < n; i++)
    {
        res = max(res, arr[i] - minVal);
        minVal = min(minVal, arr[i]);
    }

    return res;
}
*/
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int ans = maxDiff(arr, n);
    // cout << ans;

    solution sol;
    sol.maxDiff(arr,n);
    return 0;
}