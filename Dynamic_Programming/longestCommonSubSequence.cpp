#include <bits/stdc++.h>
using namespace std;

auto getTime()
{
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration);
    auto millis_count = millis.count();
    return millis_count;
}
/*
abcdghflkdjalfdsfsdafjasdkjllkdsajfjsdakfjlksfsak
aedfhrfasdfjdsakfjsdajfkjsfklsdlfkjsdlkfjadskfjjf

abcdghflkdjalffjd
abcdghfskdjalffsd
*/

int recLCS(string s1, string s2, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (s1[m - 1] == s2[n - 1])
    {
        return 1 + recLCS(s1, s2, m - 1, n - 1);
    }
    return max(recLCS(s1, s2, m, n - 1), recLCS(s1, s2, m - 1, n));
}



int memo[1000][1000];
int memoLcs(string s1, string s2, int n, int m)
{
    if(memo[n][m]!=-1)
        return memo[n][m];
        
    if(n==0 || m==0)
        memo[n][m]=0;
        
    else
    {
        if(s1[n-1]==s2[m-1])
            memo[n][m] = 1 + memoLcs(s1,s2,n-1,m-1);
        else
            memo[n][m] = max(memoLcs(s1,s2,n-1,m),memoLcs(s1,s2,n,m-1));
    }
    
    return memo[n][m];
    
}

int tabuLCS(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    int sz1 = s1.length();
    int sz2 = s2.length();
    memset(memo,-1,sizeof(memo));
    long start = getTime();
    // cout << recLCS(s1, s2, sz1, sz2);
    cout << memoLcs(s1, s2, sz1, sz2);
    // cout << tabuLCS(s1, s2, sz1, sz2);
    long end = getTime();
    cout << endl
         << "Time taken: " << end - start << "ms";
}