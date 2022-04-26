#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    pair<int,int> pa[n];
    for (int i = 0; i < n; i++)
    {
        int x = 0,y = 0;
        cin >> x >> y;
        pa[i] = {x,y};
    }
    for (int i = 0; i < n; i++)
    {
        cout << pa[i].first << " "<< pa[i].second<< endl;
    }
    
    return 0;
}