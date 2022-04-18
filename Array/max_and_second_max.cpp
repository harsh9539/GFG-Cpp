#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max=INT_MIN,secMax = INT_MIN;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for (int l = 0; l < n; l++)
    {
        if(arr[l] < max){
            if(secMax < arr[l]){
                secMax = arr[l];
            }
        }
    }
    cout << max << " " << secMax;
    
    
    return 0;
}