#include<bits/stdc++.h>
using namespace std;
// Example :-
// input arr[] = {5,8,-4,-4,9,-2,-2}
// output  = 3
int maxLen(int arr[],int n,int sum){
    unordered_map<int,int> m;
    int pre_sum = 0,res=  0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if(pre_sum == sum) res = i+1;
        if(m.find(pre_sum) == m.end()) m.insert({pre_sum,i});
        if(m.find(pre_sum - sum) != m.end()) res = max(res,i-m[pre_sum-sum]);
    }
    return res;
    
}

int main(){
    int n,sum;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Give the value of sum";
    cin >> sum;
    int ans = maxLen(arr,n,sum);
    cout << ans;
    return 0;
}