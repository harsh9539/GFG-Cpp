#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n > 0 && n % 2 == 0)
    {
        n = n / 2;
    }
    if (n == 1)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
    return 0;
}