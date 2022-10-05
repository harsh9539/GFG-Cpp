#include<bits/stdc++.h>
using namespace std;

void sort(int *arr,int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s] == 0){
            s++;
        }
        if(arr[e] == 1){
            e--;
        }
        if(arr[s] == 1 && arr[e] == 0){
            swap(arr[s], arr[e]);
            s++;e--;
        }
    }
}


int main(){
    int n;
    cin >> n;
    int *arr;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    delete [] arr;
    return 0;
}