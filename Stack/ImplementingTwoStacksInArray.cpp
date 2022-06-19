#include<bits/stdc++.h>
using namespace std;
struct MyStack{
    int *arr;
    int top1,top2;
    int size;
    MyStack(int x){
        arr = new int[x];
        top1 = -1;
        top2 = x;
        size = x;
    }
    void push1(int x){
        if(top1<=top2-1){
            top1++;
            arr[top1] = x;
        }
    }
    void push2(int x){
        if(top1<=top2-1){
            top2--;
            arr[top2] = x;
        }
    }
    void pop1(){
        if(top1>0){
            int ans = arr[top1];
            top1--;
            cout << ans << " ";
        }
        else cout << -1 << " ";
    }
    void pop2(){
        if(top2<size){
            int ans = arr[top2];
            top2++;
            cout << ans << " ";
        }
        else{
            cout << -1 << ' ';
        }
    }
};
int main(){
    MyStack s(6);
    s.push1(2);
    s.push1(3);
    s.push2(4);
    s.pop1();
    s.pop2();
    s.pop2();

    return 0;
}