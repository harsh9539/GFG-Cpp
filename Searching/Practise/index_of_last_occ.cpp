#include<bits/stdc++.h>
using namespace std;

class Naive{
    public:
        int lastOcc(int arr[], int n, int k){
            for (int  i = n-1; i >= 0; i--)
            {
                if(arr[i] == k) return i;
            }
            return -1;
        }
};

int main(){
    int n,k;
    cin >> n>> k;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Naive sol;
    // Recursive sol;
    // Iterative sol;
    int ans = sol.lastOcc(arr,n,k);
    cout << ans;
    return 0;
    return 0;
}