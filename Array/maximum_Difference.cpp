#include<bits/stdc++.h>
using namespace std;
int maxDiff(int arr[],int n){
    int maxi = INT_MIN, mini  = arr[0];
    for (int j = 0; j < n; j++)
    {
        maxi = max(maxi,arr[j]-mini);
        mini = min(mini,arr[j]);
    }
    return maxi;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = maxDiff(arr,n);
    cout << ans;
    return 0;
}