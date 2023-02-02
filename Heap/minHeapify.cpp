#include <bits/stdc++.h>
using namespace std;
void minHeapify(int *arr, int n, int i)
{
    int lt = (2*i + 1), rt = (2*i+2);
    int smallest = i;
    if (lt < n && arr[lt] < arr[i])
    {
        smallest = lt;
    }
    if (rt < n && arr[rt] < arr[smallest])
    {
        smallest = rt;
    }
    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}
int main()
{
    int arr[] = {40, 20, 30, 35, 25, 80, 32, 100, 70, 60};
    int sz = sizeof(arr) / sizeof(arr[0]);
    minHeapify(arr, sz, 0);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}