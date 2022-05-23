#include<bits/stdc++.h>
using namespace std;
int getLargest(int arr[],int n){
    int res = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>res) res = arr[i];
    }
    return res;
}
int secondLargest(int arr[],int n){
    int largest = getLargest(arr,n);
    int secMax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<largest&&arr[i] > secMax){
            secMax = arr[i];
        }
    }
    return secMax;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans =  secondLargest(arr,n);
    cout << ans;
    return 0;
}