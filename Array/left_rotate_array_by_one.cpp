#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> v){
    int size = v.size();
    int temp = v[0];
    for (int i = 1; i < size; i++)
    {
        v[i-1] = v[i];
    }
    v[size-1] = temp;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    
}


int main(){
    // int n;
    // cin >> n;
    vector<int> v = {1,2,3,4,5};
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    leftRotate(v);
    return 0;
}