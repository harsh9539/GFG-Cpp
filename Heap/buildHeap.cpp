#include <bits/stdc++.h>
using namespace std;

int left(int i){return (2*i)+1;}
int right(int i){return (2*i)+2;}
int parent(int i){return (i-1)/2;}


void minHeapify(int *arr,int n,int i){
    int lt = left(i),rt = right(i);
    int smallest = i;
    if(lt < n && arr[lt] < arr[i]) smallest = lt;
    if(rt < n && arr[rt] < arr[smallest]) smallest = rt;
    if(smallest != i){
        swap(arr[i],arr[smallest]);
        minHeapify(arr,n,smallest);
    }
}

void buildHeap(int *arr,int n){
    for (int i = (n-2)/2; i >= 0; i--)
    {
        minHeapify(arr,n,i);
    }
    
}

int main()
{
    int arr[] = {10,5,20,2,4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    buildHeap(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}