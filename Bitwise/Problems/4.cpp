#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,res;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int r=i;
        while(r>0){
            r = r&(r-1);
            res++;
        }
    }
    cout << res;
    
    return 0;
}