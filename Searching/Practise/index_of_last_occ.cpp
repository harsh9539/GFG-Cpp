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

// class Recursive{
//     public:
//         int lastOcc(int arr[],int low,int high ,int k,int n){
//             if(low>high) return -1;
//             int mid = (low+high)/2;
//             if(arr[mid]<k) return lastOcc(arr, mid+1, high, k,n);
//             else if(arr[mid]> k) return lastOcc(arr, low, (mid-1), k,n);
//             else{
//                 if(mid == (n-1) || arr[mid+1] != arr[mid]) return mid;
//                 else return lastOcc(arr,mid+1,high,k,n);
//             }
//         }
// };

class Iterative{
    public:
        int lastOcc(int arr[],int n,int k){
            int low = 0,high = n-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(arr[mid]<k) low=mid+1;
                else if(arr[mid] > k) high = mid-1;
                else{
                if(mid == n-1 || arr[mid+1] != arr[mid]) return mid;
                else high = mid-1;
            }
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
    // Naive sol;
    // Recursive sol;
    Iterative sol;
    int ans = sol.lastOcc(arr,n,k);
    cout << ans;
    return 0;
    return 0;
}