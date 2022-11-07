#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,5,3,5,6,2,6};
    int sz  = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+sz);
    for(int i= 0;i<sz;i++){
        cout << arr[i] << " ";
    }
    return 0;
}