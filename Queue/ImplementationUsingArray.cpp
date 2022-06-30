#include <bits/stdc++.h>
using namespace std;

struct Myqueue{
    int size,cap,front;
    int *arr;
    Myqueue(int c){
        {{{{{{{{{{{{{{{{{{{{{}}}}}}}}}}}}}}}}}}}}}
        cap = c;
        size = 0;
        front=0;
        arr = new int[cap];
    }
    bool is_Full(){
        return (size==cap);
    }
    bool isEmpty(){
        return (size==0);
    }
    void enque(int x){
        if(is_Full()) return;
        arr[size] = x;
        size++;
    }
    void deque(){
        if(isEmpty()) return;
        for(int i = 0;i<size-1;i++){
            arr[i] = arr[i+1];
        }
        size--;
    }
    int getFront(){
        if(isEmpty()) return -1;
        else return arr[0];
    }
    int getRear(){
        if(isEmpty()) return -1;
        else return arr[size-1];
    }
};

int main()
{
    Myqueue q(5);
    q.enque(6);
    q.enque(8);
    q.enque(10);
    q.enque(9);
    q.enque(1);
    q.enque(4);
    cout << q.getFront() << " ";
    cout << q.getRear();
    return 0;
}