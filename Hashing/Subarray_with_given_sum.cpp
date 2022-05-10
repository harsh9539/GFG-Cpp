#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isSum(int arr[],int n,int sum){
            unordered_set<int> s;
            int pre_sum = 0;
            for (int i = 0; i < n; i++)
            {
                pre_sum += arr[i];
                if(pre_sum == sum) return true;
                if(s.find(pre_sum-sum) != s.end()) return true;
                s.insert(pre_sum);
            }
            return false;
        }
};

int main(){
    int n,sum;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value of sum";
    cin >> sum;
    Solution obj;
    int ans = obj.isSum(arr,n,sum);
    if(ans ==1) cout << "True";
    else cout << "False";
    return 0;
}