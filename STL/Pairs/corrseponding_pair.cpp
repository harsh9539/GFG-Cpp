#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    pair<int,int> pa[n];
    for (int i = 0; i < n ; i++)
    {
        pa[i] = {arr[i],arr2[i]};
    }
    for (int i = 0; i < n; i++)
    {
        cout << "(" << pa[i].first << "," << pa[i].second << ")" << endl;
    }
    
    
    
    
    return 0;
}