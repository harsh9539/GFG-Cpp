#include<bits/stdc++.h>
using namespace std;
class MinHeap{
    int *arr,size,capacity;
    public:
    MinHeap(int c){
        arr = new int[c];
        size = 0;capacity =c;
    }
    int left(int i){return arr[2*i+1];}
    int right(int i){return arr[2*i+2];}
    int parent(int i){return (i-1)/2;}

    void insert(int x){
        if(size ==  capacity){cout << "Your memory is Full \n" ; return ;}
        size++;
        arr[size -1] = x;
        for (int i = size -1; i != 0 && arr[parent(i)] > arr[i];){
            swap(arr[i],arr[parent(i)]);
            i = parent(i);
        }
        
    }
    void print(){
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main(){
    MinHeap mp(5);
    mp.insert(10);
    mp.insert(12);
    mp.insert(3);
    mp.insert(5);
    mp.insert(19);
    mp.insert(29);
    mp.print();
    return 0;
}