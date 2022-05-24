#include<bits/stdc++.h>
using namespace std;
void moveToEnd(vector<int> v){
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]!=0){
            swap(v[i],v[count]);
            count++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    moveToEnd(v);
    return 0;
}