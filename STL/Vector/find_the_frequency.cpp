#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,count = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cin >> x;
    for(auto m:v){
        if(x == m) count++;
    }
    cout << count;
    return 0;
}