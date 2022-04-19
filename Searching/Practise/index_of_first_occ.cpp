#include<bits/stdc++.h>
using namespace std;
class Naive{
    public:
        int firstOcc(int arr[], int n, int k){
            for (int  i = 0; i < n; i++)
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
    int ans = sol.firstOcc(arr,n,k);
    cout << ans;
    return 0;
}