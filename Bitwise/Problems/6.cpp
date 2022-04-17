#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = true, count = 0;
    cin >> n;
    while (n > 0)
    {
        if (n & 1)
        {
            count++;
            n = n >> 1;
        }
        else
        {
            count = 0;
            n = n >> 1;
        }
        if (count >= 2)
        {
            break;
        }
    }
    if (count >= 2)
    {
        cout << false;
    }
    else
    {
        cout << true;
    }
    return 0;


// 2nd solution
/*
int ans = 0, count = 0;
while (n)
{
    if (n & 1)
        count++;
    else if ((n & 1) == 0)
    {
        count = 0;
    }
    n = n >> 1;
    ans = max(ans, count);
}
if (ans == 1)
    return true;
else
    return false;
    */

}