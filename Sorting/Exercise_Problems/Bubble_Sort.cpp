#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n-1; j++)
    {
        for (int k = 0; k < n-1; k++)
        {
            if(arr[k]>arr[k+1]){
                swap(arr[k],arr[k+1]);
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    
    return 0;
}