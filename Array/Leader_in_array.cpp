#include<bits/stdc++.h>
using namespace std;
void leaders(int arr[],int n){
    int curr_lead = arr[n-1];
    cout << arr[n-1]<< " ";
    for (int i = n-2; i >= 0; i--)
    {
        if(curr_lead < arr[i]){
            curr_lead = arr[i];
            cout << curr_lead<<" ";
        }
    }
    
}

int main(){
    // int n;
    // cin >> n;
    int arr[7] = {7,10,3,8,6,5,2};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    leaders(arr,7);
    return 0;
}