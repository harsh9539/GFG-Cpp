#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void WST(int arr[],int n,int k){
        int sum = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n-k+1; i++)
        {
            sum = 0;
            int m = i;
            for (int j = 0; j < k; j++)
            {
                
                sum += arr[m];
                m++;
                cout << "Sum at j[" << j<<"]" << sum<< endl;
            }
            
            maxi = max(maxi,sum);
            cout << "Max value at i "<< i<< " :" << maxi<<endl;
        }
        cout << maxi;
    }
};


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    Solution sol;
    sol.WST(arr,n,k);
    return 0;
}