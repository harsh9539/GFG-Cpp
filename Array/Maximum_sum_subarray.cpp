#include<bits/stdc++.h>
using namespace std;
int maxSumArray(int arr[],int n){
    int res = arr[0];
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi+arr[i],arr[i]);
        res = max(res,maxi);

    }
    return res;
}
int main(){
    int arr[7] = {2,3,-8,7,-1,2,3};
    int ans = maxSumArray(arr,7);
    cout << ans;
    return 0;
}