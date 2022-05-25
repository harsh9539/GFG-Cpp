#include<bits/stdc++.h>
using namespace std;
int maxOne(int arr[],int n){
    int res =0;
    int curr =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0) curr = 0;
        else {curr++; res = max(res,curr);}
    }
    return res;
}
int main(){
    // int n;
    // cin >> n;
    int arr[9] = {0,1,0,1,1,1,1,0,1};
    // for(int i = 0; i<n;i++){
    // cin >> arr[i];
    // }
    int ans = maxOne(arr,9);
    cout << ans;
    return 0;
}