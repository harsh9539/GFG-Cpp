#include<bits/stdc++.h>
using namespace std;
bool isPair(vector<int> &arr,int k){
    int left = 0,right = arr.size()-1;
    while(left < right){
        if(arr[left]+ arr[right] == k) return true;
        else if(arr[left] + arr[right] > k) right--;
        else left++;
    }
    return 0;
}
int main(){
    vector<int> arr= {1,2,5,7,15};
    cout << isPair(arr,22);
    return 0;
}