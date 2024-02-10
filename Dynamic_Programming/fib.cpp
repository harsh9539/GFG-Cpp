#include<bits/stdc++.h>
#include "time.h"
using namespace std;

auto getTime()
{
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration);
    auto millis_count = millis.count();
    return millis_count;
}


int recFib(int n){
    if(n == 0 || n == 1 ) return n;

    return recFib(n-1) + recFib(n-2);
}

long long memoFib(long long n, long long memo[])
{
    if (n == 0 || n == 1)
        return n;
    if (memo[n] != -1)
        return memo[n];
    memo[n] = memoFib(n - 1, memo) + memoFib(n - 2, memo);
    return memo[n];
}

long long tabulationFib(long long n){
    long long dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    for(long long i = 2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}


int main(){
    int n;
    cin >> n;
    long long memo[n + 1];
    for (int i = 0; i < n + 1; i++)
        memo[i] = -1;
    long start = getTime();
    // cout << recFib(n);
    // cout << memoFib(n, memo);
    cout << tabulationFib(n);
    long end = getTime();
    cout << endl << "Time Taken: " << end - start << " ms" << endl;
}