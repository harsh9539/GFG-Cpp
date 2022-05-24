#include<bits/stdc++.h>
using namespace std;

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