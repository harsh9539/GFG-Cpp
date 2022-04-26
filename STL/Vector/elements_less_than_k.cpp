#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cin >> k;
    for(auto m:v){
        if(m<k) cout << m << " ";
    }
    return 0;
}