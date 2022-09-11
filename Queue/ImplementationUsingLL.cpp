#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

struct Queue{
    Node *front,*rear;
    int sz;
    Queue(){
        front = NULL,rear = NULL;
        sz = 0;
    }
    void enque(int x){
        Node *temp = new Node(x);
        sz++;
        if(front == NULL) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void deque(){
        if(front == NULL) return;
        sz--;
        Node *temp = front;
        front = front->next;
        if(front == NULL){rear = NULL;}
        delete temp;
    }
    int sizeQ(){
        return sz;
    }
    bool isEmpty(){
        return sz==0;
    }
    int getFront(){
        if(front == NULL) return INT_MIN;
        return front->data;
    }
    int getRear(){
        if(rear == NULL) return INT_MIN;
        return rear->data;
    }
};

int main(){
    Queue q;
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