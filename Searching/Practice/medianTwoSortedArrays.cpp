#include<bits/stdc++.h>
using namespace std;
void median(vector<int> &v1,vector<int> &v2){
    vector<float> v;
    int sz1 = v1.size(),sz2 = v2.size();
    int i = 0,j = 0;
    while(i<sz1 && j<sz2){
        if(v1[i] < v2[j]) v.push_back(v1[i++]);
        else v.push_back(v2[j++]);
    }
    while(i < sz1) v.push_back(v1[i++]);
    while(j < sz2) v.push_back(v2[j++]);
    
    if(v.size() % 2 != 0){
        cout <<  float(v[v.size()/2]);
    }
    else{
        float res = (v[v.size()/2] + v[v.size()/2-1])/2;
        cout << res;
    }
}
int main(){
    vector<int> v1={1,2,3,4,5,6},v2={10,20,30,40,50};
    median(v1,v2);
    return 0;
}