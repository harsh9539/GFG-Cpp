#include<bits/stdc++.h>
using namespace std;
// int revNum(int);
int revNum(int n){
    int temp = n;
    int rem = 0,rev = 0;
    while(temp>0){
        rem = temp%10;
        rev = rev*10+rem;
        temp = temp/10;
    }
    return rev;
}

int powNum(int n){
    int rev = revNum(n);
    if(rev == 1){
        return n;
    }
    int res = n* powNum(rev-1);
    int final = 1000000007/res;
    return final;
}
int main(){
    int n;
    cin >> n;
    int res = powNum(n);
    cout << res;
    return 0;
}