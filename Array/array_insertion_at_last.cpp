#include<bits/stdc++.h>
using namespace std;
// int eleAtEnd(int arr[],int sizeofArray,int element){
//     arr[sizeofArray] = element;
//     return arr;
// }
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
    int element;
    cin >> element;
    arr[n-1] = element;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j]<< " ";
    }
    
    
    return 0;
}