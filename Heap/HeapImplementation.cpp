#include<bits/stdc++.h>
using namespace std;
class MinHeap{
    public:
    int *arr,size,capacity;
    MinHeap(int c){
        arr = new int[c];
        size = 0;capacity = c;
    }
    int left(int i){return arr[2*i+1];}
    int right(int i){return arr[2*i+2];}
    int parent(int i){return (i-1)/2;}
};
int main(){
    MinHeap mp(5);

    return 0;
}