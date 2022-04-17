#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int i = 1;
    while (true)
    {
        if (n&1)
        {
            cout << i;
            break;
        }
        else{
            n = n >> 1;
            i++;
        }
        
    }
    return 0;
}