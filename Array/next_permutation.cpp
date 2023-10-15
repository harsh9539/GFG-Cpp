#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {3,2,1};
    next_permutation(v.begin(),v.end());
    for(auto x:v) cout << x << " ";
    cout << endl;
    return 0;
}