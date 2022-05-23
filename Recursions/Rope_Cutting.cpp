#include <bits/stdc++.h>
using namespace std;
/*
class Solution{
    public:
        int maxPiece(int n,int a, int b, int c){
            if(n==0) return 0;
            if(n<0) return -1;
            int res = max(maxPiece((n-a),a,b,c),maxPiece((n-b),a,b,c),maxPiece((n-c),a,b,c));
            if(res == -1) return -1;
            return res+1;
        }
};
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    Solution obj;
    int ans = obj.maxPiece(n,a,b,c);
    cout << ans;
    return 0;
}
*/

int Smallest(int p, int q, int r)
{
    if (q > p && r > p)
    {
        return p;
    }
    else if (q < p && q < r)
    {
        return q;
    }
    else
    {
        return r;
    }
}

int main()
{
    cout << "Enter the length of Rope" << endl;
    int n;
    cin >> n;
    cout << "Enter your 3 text case with space interval" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    int r = Smallest(a, b, c);
    int q = n / r;
    cout << "Maximum cuts could be:\n";
    cout << q;
}