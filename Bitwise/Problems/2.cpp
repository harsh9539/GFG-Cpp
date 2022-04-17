#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int i =1;
    while(true){
        if ((m&1) != (n&1))
        {
            cout << i;
            break;
        }
        else{
            m = m>>1;
            n = n>>1;
            i++;
        }
        
    }
    return 0;
}