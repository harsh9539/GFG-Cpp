#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x,y,cx = 0,cy = 0;
    cin >> x >> y;
    // cout << " value of x " << x << " value of y is " << y<<endl;
    for (int j = 0; j < n; j++)
    {
        if(x==arr[j]){
            cx++;
            cout << " value of cx is : " << cx;
        }
        else if(y==arr[j]){
            cy++;
            cout << " value of cy is : " << cy<< endl;
        }
    }

    if(cx>cy){
        cout << cx;
    }
    else if(cx < cy){
        cout << cy;
    }
    else{
        if(x>y){
            cout << y;
        }
        else{
            cout << x;
        }
    }
    return 0;
}