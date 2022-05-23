#include<bits/stdc++.h>
using namespace std;
void subsets(string str, string curr = "", int ind = 0){
    if(ind == str.length()){
        cout << curr<<" ";
        return ;
    }
    subsets(str,curr,ind+1);
    subsets(str,curr+str[ind],ind+1);
}

int main(){
    string str = "harsh";
    subsets(str);
    return 0;
}