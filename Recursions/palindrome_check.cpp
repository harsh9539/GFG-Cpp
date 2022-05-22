#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int s , int e){
    if(s >= e) return true;
    return (str[s] == str[e] && isPalindrome(str,s+1,e-1) );
}
int main(){
    string str;
    getline(cin , str);
    int strLen = str.size();
    int start = 0;
    int end = strLen -1;
    bool ans = isPalindrome(str,start,end);
    cout << ans;
    return 0;
}