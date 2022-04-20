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

class Recursive{
    public:
        int firstOcc(int arr[],int low,int high ,int k){
            if(low>high) return -1;
            int mid = (low+high)/2;
            if(arr[mid]<k) return firstOcc(arr, mid+1, high, k);
            else if(arr[mid]> k) return firstOcc(arr, low, (mid-1), k);
            else{
                if(mid == 0 || arr[mid-1] != arr[mid]) return mid;
                else return firstOcc(arr,low,(mid-1),k);
            }
        }
};

int main(){
    int n,k,low=0;
    cin >> n>> k;
    int high = n-1;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Naive sol;
    Recursive sol;
    int ans = sol.firstOcc(arr,low,high,k);
    cout << ans;
    return 0;
}