#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[],int n){
    int res = arr[0];
	int maxEnd = arr[0];
	for(int i=0;i<n;i++){
		maxEnd = max(maxEnd+arr[i],arr[i]);
		res = max(res,maxEnd);
	}
	return res;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = maxSum(arr,n);
    cout << ans;
    return 0;
}