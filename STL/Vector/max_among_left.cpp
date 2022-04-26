#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int index = 0;
    bool flag = false;
    for(auto it = v.begin();it != v.end();it++){
        flag = false;
        for (auto jt = v.begin(); jt != it; jt++)
        {
            if(*jt < *it){ flag = true;}
            else{ flag = false; break;}
        }
        if(flag == true) cout << (index) << " ";
        index++;
    }
    return 0;
}