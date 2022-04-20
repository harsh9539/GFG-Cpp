#include<bits/stdc++.h>
using namespace std;
// class Naive{
//     public:
//         int firstOcc(int arr[], int n, int k){
//             for (int  i = 0; i < n; i++)
//             {
//                 if(arr[i] == k) return i;
//             }
//             return -1;
//         }
// };

// class Recursive{
//     public:
//         int firstOcc(int arr[],int low,int high ,int k){
//             if(low>high) return -1;
//             int mid = (low+high)/2;
//             if(arr[mid]<k) return firstOcc(arr, mid+1, high, k);
//             else if(arr[mid]> k) return firstOcc(arr, low, (mid-1), k);
//             else{
//                 if(mid == 0 || arr[mid-1] != arr[mid]) return mid;
//                 else return firstOcc(arr,low,(mid-1),k);
//             }
//         }
// };

class Iterative{
    public:
        int firstOcc(int arr[],int n,int k){
            int low = 0,high = n-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(arr[mid]<k) low=mid+1;
                else if(arr[mid] > k) high = mid-1;
                else{
                if(mid == 0 || arr[mid-1] != arr[mid]) return mid;
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
    int ans = sol.firstOcc(arr,n,k);
    cout << ans;
    return 0;
}