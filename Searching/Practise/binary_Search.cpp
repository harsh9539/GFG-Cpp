#include<bits/stdc++.h>
using namespace std;
class iterative{
    public:
        int bsearch(int arr[],int n,int k){
            int low = 0,high = n-1;
            cout << "value of n is : "<< k<<endl;
            while(low<=high){
                int mid = (low+high)/2;
                if(arr[mid]==k) return mid;
                else if(arr[mid] > k) high = mid-1;
                else low = mid + 1;
            }
        return -1;
        }
};
int main(){
    int n,k;
    cin >> n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    iterative sol;
    int ans = sol.bsearch(arr,n,k);
    cout << ans;
    return 0;
}