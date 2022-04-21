#include <bits/stdc++.h>
using namespace std;

int countOne(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 0)
        {
            high = mid - 1;
        }
        else
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
            {
                return (mid+1);
            }
            else
                low = mid + 1;
        }
    }
    return -1;
}




// int countOne(int*arr)
// {
// int a=0;
// while (a<sizeof(arr)/4){
// if (!arr[a]) break;a++;
// }
// return a-1;
// }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = countOne(arr,n);
    cout << ans;
    return 0;
}