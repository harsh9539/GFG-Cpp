#include<bits/stdc++.h>
using namespace std;
int findMajority(int arr[],int n){
    int res = 0,count = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[res] == arr[i]) count++;
        else count--;
        if(count==0) {res = i; count = 1;}
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[res] == arr[i]) count++;
        
    }
    if(count<=(n/2)) res = -1;
    return res;
    
}
int main(){
    int arr[9] {1,2,1,3,1,4,1,5,1};
    cout << findMajority(arr,9);
    return 0;
}