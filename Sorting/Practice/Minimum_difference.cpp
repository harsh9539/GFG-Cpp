#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans = INT_MAX;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for (int i = 1; i < n; i++)
    {
        int mini = arr[i] - arr[i-1];
        ans = min(mini,ans);
    }
    cout << ans;
    
    
    return 0;
}