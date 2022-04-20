#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,j;
    cin >> n>>k;
    bool flag = false;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // given time complexity is O(n), so we use naive approach here
    for (j = 0; j < n; j++)
    {
        // cout << arr[j]<< endl;
        if(arr[j] == k){
            flag = true;
            break;
        }
    }
    if(flag==true) cout << j;
    else cout << -1;
    

    return 0;
}