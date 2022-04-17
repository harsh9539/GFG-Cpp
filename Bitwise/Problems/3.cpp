#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n>>k;
    int i = 0;
    bool flag = false;
    
    while (i<=k)
    {
        if(n&1){
            if(i==k){
                flag = true;
                break;
            }
        }
        else{
            n = n>>1;
            i++;
        }
    }
    if(flag == true){
        cout <<"Yes";
    }
    else{
        cout << "No";
    }
    
    return 0;
}