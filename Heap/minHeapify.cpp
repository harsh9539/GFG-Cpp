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


int extractMin(int *arr,int n){
    if(n == 0) return INT_MAX;
    if(n == 1) {n--; return arr[0];}
    swap(arr[0],arr[n - 1]);
    n--;
    minHeapify(arr,n,0);
    return arr[n];
}



int main()
{
    int arr[] = {40, 20, 30, 35, 25, 80, 32, 100, 70, 60};
    int sz = sizeof(arr) / sizeof(arr[0]);
    minHeapify(arr, sz, 0);
    // for (int i = 0; i < sz; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    cout << extractMin(arr,sz);
    return 0;
}