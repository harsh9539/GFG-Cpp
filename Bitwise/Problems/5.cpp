#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        int ch = a % 2;
        if (a % 2 != b % 2)
        {
            count++;
            cout << "Value of a%2: " << ch << endl;
            a = a / 2;
            b = b / 2;
        }
        else
        {
            cout << "Value of a: " << a << endl;
            a = a / 2;
            b = b / 2;
        }

        // cout << "error";
    }
    cout << count;

    return 0;
}

// 1st solution

/*
class Solution
{

public
    static int countBitsFlip(int a, int b)
    {
        int p = a ^ b;
        int ans = count(p);
        return ans;
    }

    static int count(int n)
    {
        int count = 0;
        while (n > 0)
        {
            int temp = n % 2;
            if (temp == 1)
                count++; // count set bits
            n = n / 2;
        }
        return count;
    }
} */

// 2nd solution
/*
class Solution{
    public:
    int countBitsFlip(int a, int b){
        int cnt = 0;
        while (a || b) {
            cnt += ((a & 1) ^ (b & 1));
            a >>= 1; b >>= 1;
        }
        return cnt;
    }
};
*/