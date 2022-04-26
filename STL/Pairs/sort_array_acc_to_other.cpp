#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    char chr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> chr[i];
    }
    pair<int,char> pa[n];
    for (int i = 0; i < n; i++)
    {
        pa[i] = {arr[i],chr[i]};
    }
    sort(pa,pa+n);
    for (int i = 0; i < n; i++)
    {
        cout << pa[i].second<< " ";
    }
    
    
    
    

    return 0;
}