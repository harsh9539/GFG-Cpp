#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool in0Sum(int arr[],int n){
            unordered_set<int> s;
            int pre_sum = 0;
            for (int i = 0; i < n; i++)
            {
                pre_sum += arr[i];
                if(pre_sum == 0 ) return true;
                if(s.find(pre_sum) != s.end()) return true;
                s.insert(pre_sum);
            }
            return false;
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
    Solution obj;
    int ans = obj.in0Sum(arr,n);
    if(ans ==1) cout << "True";
    else cout << "False";
    return 0;
}