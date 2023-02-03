#include <bits/stdc++.h>
using namespace std;




void decreaseKey(int *arr,int n,int i,int x){
    arr[i] = x;
    while (i != 0 && arr[(i-1)/2] > arr[i])
    {
        swap(arr[i],arr[(i-1)/2]);
        i = (i-1)/2;
    }
    
}



int main()
{
    int arr[] = {10,20,40,80,100,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    decreaseKey(arr,n,3,5);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}