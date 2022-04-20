#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int n,int k){
    int low=0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == k) return mid;
        else if(arr[mid] > k) high = mid-1;
        else low = mid+1;
    }
    return -1;
}

int main(){
    int n,k;
    cin >> n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = bs(arr,n,k);
    cout << ans;
    return 0;
}