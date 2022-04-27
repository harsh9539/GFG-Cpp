#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int num){
    if(num == 0 || num ==1) return false;
    // if(num%2==0)
    for (int i = 2; i< num; i++)
    {
        if(num%i == 0){
            return false;
        }
    }
    return true;
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
    // for(auto x:v) cout << x << " ";
    int index = 1;
    for(auto it = v.begin(); it != v.end(); it++){
        int num = (*it);
        int ans = checkPrime(num);
        // cout << "value of num is ans is " << num<< " "<< ans << " \n";
        int ind = checkPrime(index);
        // cout << "value of index and ind " << index<< " "<<ind << "\n ";
        if(ind == true && ans == true) cout << (*it)<<" ";
        index++;
    }
    
    return 0;
}