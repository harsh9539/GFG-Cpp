#include<bits/stdc++.h>
using namespace std;
int power(int n,int p){
    if(p==1){
        return n;
    }
    int res = n* power(n,p-1);
    return res;
}

int main(){
    long long int n,p;
    cin >> n >> p;
    cout << power(n,p);
    return 0;
}