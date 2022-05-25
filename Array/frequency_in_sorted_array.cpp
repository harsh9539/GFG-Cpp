#include<bits/stdc++.h>
using namespace std;
void printfreq(int arr[],int n){
    int i = 0, freq = 1;
    for (i; i < n; i++)
    {
        int ele = arr[i];
        for (int j = i+1; j < n; j++)
        {
            if(ele == arr[j]) {freq++; i++;}
            else break;
        }
        cout << ele << " " << freq<< endl;
        freq = 1;
    }
    
}
int main(){
    // int n;
    // cin >> n;
    int arr[9] = {10,10,10,25,30,30,30,40,40};
    // for(int i = 0; i<n;i++){
    // cin >> arr[i];
    // }
    printfreq(arr,9);
    return 0;
}