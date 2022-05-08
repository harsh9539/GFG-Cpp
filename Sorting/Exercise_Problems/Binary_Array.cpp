#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,c;
    cin >> n;
    int arr[n];
    int arr2[n];
    k = n;
    c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0) {arr2[c] = 0; c++;}
        else {arr2[k-1] = 1; k--;}
    }
    for (int i = 0; i < n; i++)
    {
        cout <<  arr2[i] << " ";
    }
    
    return 0;
}