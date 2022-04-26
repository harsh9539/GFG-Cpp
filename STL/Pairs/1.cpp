#include<bits/stdc++.h>
using namespace std;
void sum(vector<pair<int,int>> v){
    long long sum = 0;

    for(auto x:v){
        sum += x.second;
    }
    cout << sum;
    cout << endl;
}


int main(){
    int n;
    cin >>n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));

    }
    sum(v);
    

    return 0;
}