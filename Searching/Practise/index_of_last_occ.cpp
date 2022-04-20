#include<bits/stdc++.h>
using namespace std;

// class Naive{
//     public:
//         int lastOcc(int arr[], int n, int k){
//             for (int  i = n-1; i >= 0; i--)
//             {
//                 if(arr[i] == k) return i;
//             }
//             return -1;
//         }
// };

class Recursive{
    public:
        int lastOcc(int arr[],int low,int high ,int k,int n){
            if(low>high) return -1;
            int mid = (low+high)/2;
            if(arr[mid]<k) return lastOcc(arr, mid+1, high, k,n);
            else if(arr[mid]> k) return lastOcc(arr, low, (mid-1), k,n);
            else{
                if(mid == (n-1) || arr[mid+1] != arr[mid]) return mid;
                else return lastOcc(arr,mid+1,high,k,n);
            }
        }
};

int main(){
    int n,k,low=0;
    cin >> n>> k;
    int high=n-1;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Naive sol;
    Recursive sol;
    // Iterative sol;
    int ans = sol.lastOcc(arr,low,high,k,n);
    cout << ans;
    return 0;
    return 0;
}