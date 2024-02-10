#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
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

auto getTime()
{
    // Get the current time point
    auto now = std::chrono::system_clock::now();

    // Get the duration since the epoch (Jan 1, 1970) until now
    auto duration = now.time_since_epoch();

    // Convert the duration to milliseconds
    auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration);

    // Extract the count of milliseconds
    auto millis_count = millis.count();

    // Output the current time in milliseconds
    // std::cout << "Current time in milliseconds: " << millis_count << std::endl;
    return millis_count;
}

int main()
{
    int n;
    cin >> n;
    long long memo[n + 1];
    for (int i = 0; i < n + 1; i++)
        memo[i] = -1;
    auto start = getTime();
    int ans = fibo(n);
    cout << ans;
    // long long ansMemo = memoFib(n, memo);
    // cout << ansMemo;
    auto end = getTime();
    cout << endl << "Time taken by memoization: " << end - start << "ms" << endl;
    return 0;
}