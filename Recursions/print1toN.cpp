#include<bits/stdc++.h>
using namespace std;
void printNo(int n){
    if(n==0) return;
    printNo(n-1);
    cout << n <<" ";
}
int main(){
    int n;
    cin >> n;
    printNo(n);
    return 0;
}