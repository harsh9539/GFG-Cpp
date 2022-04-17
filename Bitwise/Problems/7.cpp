#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count = 0,ans = INT_MIN;
    cin >> n;
    while(n>0){
        if(n&1){
            count++;
            n = n>>1;
        }
        else{
            count = 0;
            n = n>>1;
        }
        if(count>ans){
            ans = count;
        }
    }
    cout << ans;
    return 0;
}