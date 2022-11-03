#include<bits/stdc++.h>
using namespace std;

class iterative{
    public:
        int bsearch(int arr[],int n,int k){
            int low = 0,high = n-1;
            while (low<=high)
            {
                int mid = (low+high)/2;
                if(arr[mid] == k) {return mid; break;}
                else if(arr[mid] > k){
                    high = mid -1;
                }
                else{
                    low = mid + 1;
                }
                cout << "arr["<< mid << "]: " << arr[mid] << endl;
            }
            return -1;
        }
};
class Recursive{
    public:
        int bsearch(int arr[],int low,int high,int k){
            if(low>high) return -1;
            int mid = (low+high)/2;
            if(arr[mid]==k) return mid;
            else if(arr[mid]> k) return bsearch(arr,low,mid-1,k);
            else return bsearch(arr,mid+1,high,k);
        }
};

int main(){
    int n,k,low=0;
    cin >> n;
    int high = n-1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >>k;
    iterative sol;
    int ans = sol.bsearch(arr,n,k);
    // Recursive sol;
    // int ans = sol.bsearch(arr,low,high,k);
    cout << ans;
    return 0;
}