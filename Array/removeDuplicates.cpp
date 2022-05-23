#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void remDup(int arr[],int n){
            int res = 1;
            int count = 0;
            for (int i = 1; i < n; i++)
            {
                if(arr[i]!=arr[res-1]){
                    arr[res] = arr[i];
                    res++;
                    count++;
                }
            }
            cout << "count :" << count << " " << res << endl;
            cout << arr[2] << endl;
            for (int i = 0; i < res; i++)
            {
                cout << arr[i]<<" ";
            }
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
    obj.remDup(arr,n);
    return 0;
}