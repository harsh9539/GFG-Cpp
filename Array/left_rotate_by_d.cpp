#include<bits/stdc++.h>
using namespace std;
/* first method O(n)-> space
void leftRotate(int arr[],int n,int size){
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    // cout << v.size();
    for (int i = size; i < n; i++)
    {
        arr[i-size] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[n - size + i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
*/
// 2nd method O(1)-> space
void reverse2(int arr[],int n ,int d);
void leftRotate(int arr[],int n, int d){    
    // when d is greater than n or d >= n;
    d = d%2;
    reverse2(arr,0,d-1);
    reverse2(arr,d,n-1);
    reverse2(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void reverse2(int arr[],int low, int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}


int main(){
    // int n;
    // cin >> n;
    int arr[5] = {1,2,3,4,5};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    leftRotate(arr,5,2);
    return 0;
}